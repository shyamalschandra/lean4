/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Lean.Meta
import Init.Lean.Elab.Log
import Init.Lean.Elab.Alias
import Init.Lean.Elab.ResolveName

namespace Lean
namespace Elab
namespace Term

structure Context extends Meta.Context :=
(fileName    : String)
(fileMap     : FileMap)
(cmdPos      : String.Pos)
(ns          : Name) -- current Namespace
(univNames   : List Name := [])
(openDecls   : List OpenDecl := [])

inductive SyntheticMVarInfo
| typeClass : SyntheticMVarInfo
| tactic (tacticCode : Syntax) : SyntheticMVarInfo
| postponed (macroStack : List Syntax) : SyntheticMVarInfo

structure State extends Meta.State :=
(macroStack      : List Syntax := [])
(syntheticMVars  : List (MVarId × SyntheticMVarInfo) := [])
(messages        : MessageLog := {})
(instImplicitIdx : Nat := 1)
(anonymousIdx    : Nat := 1)

abbrev TermElabM := ReaderT Context (EStateM Exception State)
abbrev TermElab  := SyntaxNode → Option Expr → TermElabM Expr

instance TermElabM.monadLog : MonadLog TermElabM :=
{ getCmdPos   := do ctx ← read; pure ctx.cmdPos,
  getFileMap  := do ctx ← read; pure ctx.fileMap,
  getFileName := do ctx ← read; pure ctx.fileName,
  logMessage  := fun msg => modify $ fun s => { messages := s.messages.add msg, .. s } }

abbrev TermElabTable := SMap SyntaxNodeKind TermElab
def mkBuiltinTermElabTable : IO (IO.Ref TermElabTable) :=  IO.mkRef {}
@[init mkBuiltinTermElabTable] constant builtinTermElabTable : IO.Ref TermElabTable := arbitrary _

def addBuiltinTermElab (k : SyntaxNodeKind) (declName : Name) (elab : TermElab) : IO Unit :=
do m ← builtinTermElabTable.get;
   when (m.contains k) $
     throw (IO.userError ("invalid builtin term elaborator, elaborator for '" ++ toString k ++ "' has already been defined"));
   builtinTermElabTable.modify $ fun m => m.insert k elab

def declareBuiltinTermElab (env : Environment) (kind : SyntaxNodeKind) (declName : Name) : IO Environment :=
let name := `_regBuiltinTermElab ++ declName;
let type := mkApp (mkConst `IO) (mkConst `Unit);
let val  := mkAppN (mkConst `Lean.Elab.Term.addBuiltinTermElab) #[toExpr kind, toExpr declName, mkConst declName];
let decl := Declaration.defnDecl { name := name, lparams := [], type := type, value := val, hints := ReducibilityHints.opaque, isUnsafe := false };
match env.addAndCompile {} decl with
-- TODO: pretty print error
| Except.error _ => throw (IO.userError ("failed to emit registration code for builtin term elaborator '" ++ toString declName ++ "'"))
| Except.ok env  => IO.ofExcept (setInitAttr env name)

@[init] def registerBuiltinTermElabAttr : IO Unit :=
registerAttribute {
 name  := `builtinTermElab,
 descr := "Builtin term elaborator",
 add   := fun env declName arg persistent => do {
   unless persistent $ throw (IO.userError ("invalid attribute 'builtinTermElab', must be persistent"));
   kind ← syntaxNodeKindOfAttrParam env `Lean.Parser.Term arg;
   match env.find declName with
   | none  => throw "unknown declaration"
   | some decl =>
     match decl.type with
     | Expr.const `Lean.Elab.Term.TermElab _ _ => declareBuiltinTermElab env kind declName
     | _ => throw (IO.userError ("unexpected term elaborator type at '" ++ toString declName ++ "' `TermElab` expected"))
 },
 applicationTime := AttributeApplicationTime.afterCompilation
}

abbrev TermElabAttribute := ElabAttribute TermElabTable
def mkTermElabAttribute : IO TermElabAttribute := mkElabAttribute `elabTerm "term" builtinTermElabTable
@[init mkTermElabAttribute] constant termElabAttribute : TermElabAttribute := arbitrary _

@[inline] def liftMetaM {α} (x : MetaM α) : TermElabM α :=
fun ctx s => match x ctx.toContext s.toState with
  | EStateM.Result.ok a newS     => EStateM.Result.ok a { toState := newS, .. s }
  | EStateM.Result.error ex newS => EStateM.Result.error (Exception.meta ex) { toState := newS, .. s }

def getLCtx : TermElabM LocalContext := do ctx ← read; pure ctx.lctx
def getLocalInsts : TermElabM LocalInstances := do ctx ← read; pure ctx.localInstances
def getOptions : TermElabM Options       := do ctx ← read; pure ctx.config.opts
def getTraceState : TermElabM TraceState := do s ← get; pure s.traceState
def setTraceState (traceState : TraceState) : TermElabM Unit := modify $ fun s => { traceState := traceState, .. s }
def addContext (msg : MessageData) : TermElabM MessageData :=
do ctx ← read;
   s   ← get;
   pure $ MessageData.context s.env s.mctx ctx.lctx msg

instance tracer : SimpleMonadTracerAdapter TermElabM :=
{ getOptions       := getOptions,
  getTraceState    := getTraceState,
  addContext       := addContext,
  modifyTraceState := fun f => modify $ fun s => { traceState := f s.traceState, .. s } }

def dbgTrace {α} [HasToString α] (a : α) : TermElabM Unit :=
_root_.dbgTrace (toString a) $ fun _ => pure ()

def isDefEq (t s : Expr) : TermElabM Bool := liftMetaM $ Meta.isDefEq t s
def inferType (e : Expr) : TermElabM Expr := liftMetaM $ Meta.inferType e
def whnf (e : Expr) : TermElabM Expr := liftMetaM $ Meta.whnf e
def isClass (t : Expr) : TermElabM (Option Name) := liftMetaM $ Meta.isClass t
def mkFreshLevelMVar : TermElabM Level := liftMetaM $ Meta.mkFreshLevelMVar
def mkFreshExprMVar (type : Expr) (userName? : Name := Name.anonymous) (synthetic : Bool := false) : TermElabM Expr :=
liftMetaM $ Meta.mkFreshExprMVar type userName? synthetic

@[inline] def withNode {α} (stx : Syntax) (x : SyntaxNode → TermElabM α) : TermElabM α :=
stx.ifNode x (fun _ => throw $ Exception.other "term elaborator failed, unexpected syntax")

def elabTerm (stx : Syntax) (expectedType : Option Expr) : TermElabM Expr :=
withNode stx $ fun node => do
  s ← get;
  let tables := termElabAttribute.ext.getState s.env;
  let k := node.getKind;
  match tables.find k with
  | some elab => tracingAt stx $ elab node expectedType
  | none      => throw $ Exception.other ("elaboration function for '" ++ toString k ++ "' has not been implemented")

def elabType (stx : Syntax) : TermElabM Expr :=
do u ← mkFreshLevelMVar;
   type ← elabTerm stx (mkSort u);
   -- TODO: ensure it is a type
   pure type

@[builtinTermElab «prop»] def elabProp : TermElab :=
fun _ _ => pure $ mkSort levelZero

@[builtinTermElab «sort»] def elabSort : TermElab :=
fun _ _ => pure $ mkSort levelZero

@[builtinTermElab «type»] def elabTypeStx : TermElab :=
fun _ _ => pure $ mkSort levelOne

@[builtinTermElab «hole»] def elabHole : TermElab :=
fun _ expectedType? =>
  match expectedType? with
  | some expectedType => mkFreshExprMVar expectedType
  | none              => do u ← mkFreshLevelMVar; mkFreshExprMVar (mkSort u)

private def mkFreshAnonymousName : TermElabM Name :=
do s ← get;
   let anonymousIdx := s.anonymousIdx;
   modify $ fun s => { anonymousIdx := s.anonymousIdx + 1, .. s};
   pure $ (`_a).appendIndexAfter anonymousIdx

private def mkFreshInstanceName : TermElabM Name :=
do s ← get;
   let instIdx := s.instImplicitIdx;
   modify $ fun s => { instImplicitIdx := s.instImplicitIdx + 1, .. s};
   pure $ (`_inst).appendIndexAfter instIdx

def mkHole := mkNode `Lean.Parser.Term.hole [mkAtom "_"]

/-- Given syntax of the form (`:` term)?, return `term` if it is present, and a hole otherwise. -/
private def expandOptType (stx : Syntax) : Syntax :=
if stx.getNumArgs == 0 then
  mkHole
else
  stx.getArg 1

/-- Given syntax of the form `ident <|> hole`, return `ident`. If `hole`, then we create a new anonymous name. -/
private def expandBinderIdent (stx : Syntax) : TermElabM Syntax :=
if stx.getKind == `Lean.Parser.Term.hole then do
  id ← mkFreshAnonymousName;
  pure $ mkIdentFrom stx id
else
  pure stx

/-- Given syntax of the form `(ident >> " : ")?`, return `ident`, or a new instance name. -/
private def expandOptIdent (stx : Syntax) : TermElabM Syntax :=
if stx.getNumArgs == 0 then do
  id ← mkFreshInstanceName; pure $ mkIdentFrom stx id
else
  pure $ stx.getArg 0

structure BinderView :=
(id : Syntax) (type : Syntax) (bi : BinderInfo)

private def matchBinder (stx : Syntax) : TermElabM (Array BinderView) :=
withNode stx $ fun node => do
  let k := node.getKind;
  if k == `Lean.Parser.Term.simpleBinder then
    -- binderIdent+
    let ids  := (node.getArg 0).getArgs;
    let type := mkHole;
    ids.mapM $ fun id => do id ← expandBinderIdent id; pure { id := id, type := type, bi := BinderInfo.default }
  else if k == `Lean.Parser.Term.explicitBinder then
    -- `(` binderIdent+ (`:` type)? (binderDefault <|> binderTactic)? `)`
    let ids  := (node.getArg 1).getArgs;
    let type := expandOptType (node.getArg 2);
    -- TODO handle `binderDefault` and `binderTactic`
    ids.mapM $ fun id => do id ← expandBinderIdent id; pure { id := id, type := type, bi := BinderInfo.default }
  else if k == `Lean.Parser.Term.implicitBinder then
    -- `{` binderIdent+ (`:` type)? `}`
    let ids  := (node.getArg 1).getArgs;
    let type := expandOptType (node.getArg 2);
    ids.mapM $ fun id => do id ← expandBinderIdent id; pure { id := id, type := type, bi := BinderInfo.implicit }
  else if k == `Lean.Parser.Term.instBinder then do
    -- `[` optIdent type `]`
    id ← expandOptIdent (node.getArg 1);
    let type := node.getArg 2;
    pure #[ { id := id, type := type, bi := BinderInfo.instImplicit } ]
  else
    throw $ Exception.other "term elaborator failed, unexpected binder syntax"

@[inline] def withLCtx {α} (lctx : LocalContext) (localInsts : LocalInstances) (x : TermElabM α) : TermElabM α :=
adaptReader (fun (ctx : Context) => { lctx := lctx, localInstances := localInsts, .. ctx }) x

def resetSynthInstanceCache : TermElabM Unit :=
modify $ fun s => { cache := { synthInstance := {}, .. s.cache }, .. s }

@[inline] def resettingSynthInstanceCache {α} (x : TermElabM α) : TermElabM α :=
do s ← get;
   let savedSythInstance := s.cache.synthInstance;
   resetSynthInstanceCache;
   finally x (modify $ fun s => { cache := { synthInstance := savedSythInstance, .. s.cache }, .. s })

@[inline] def resettingSynthInstanceCacheWhen {α} (b : Bool) (x : TermElabM α) : TermElabM α :=
if b then resettingSynthInstanceCache x else x

def mkFreshId : TermElabM Name :=
do s ← get;
   let id := s.ngen.curr;
   modify $ fun s => { ngen := s.ngen.next, .. s };
   pure id

private partial def elabBindersAux (binders : Array Syntax) : Nat → LocalContext → LocalInstances → TermElabM (LocalContext × LocalInstances)
| i, lctx, localInsts =>
  if h : i < binders.size then do
    binderViews ← matchBinder (binders.get ⟨i, h⟩);
    (lctx, localInsts) ← binderViews.foldlM
      (fun (p : LocalContext × LocalInstances) binderView => do
        let (lctx, localInsts) := p;
        withLCtx lctx localInsts $ do
          type       ← elabType binderView.type;
          fvarId     ← mkFreshId;
          -- dbgTrace (toString binderView.id.getId ++ " : " ++ toString type);
          let lctx  := lctx.mkLocalDecl fvarId binderView.id.getId type binderView.bi;
          className? ← isClass type;
          match className? with
          | none           => pure (lctx, localInsts)
          | some className => do
            resetSynthInstanceCache;
            let localInsts := localInsts.push { className := className, fvar := mkFVar fvarId };
            pure (lctx, localInsts))
      (lctx, localInsts);
    elabBindersAux (i+1) lctx localInsts
  else
    pure (lctx, localInsts)

@[inline] def elabBinders {α} (binders : Array Syntax) (x : TermElabM α) : TermElabM α :=
do lctx ← getLCtx;
   localInsts ← getLocalInsts;
   (lctx, newLocalInsts) ← elabBindersAux binders 0 lctx localInsts;
   resettingSynthInstanceCacheWhen (newLocalInsts.size > localInsts.size) $
     adaptReader (fun (ctx : Context) => { lctx := lctx, localInstances := newLocalInsts, .. ctx }) x

@[inline] def elabBinder {α} (binder : Syntax) (x : TermElabM α) : TermElabM α :=
elabBinders #[binder] x

end Term

export Term (TermElabM)

/-
@[builtinTermElab «listLit»] def elabListLit : TermElab :=
fun stx _ => do
  let openBkt  := stx.getArg 0;
  let args     := stx.getArg 1;
  let closeBkt := stx.getArg 2;
  let consId   := mkIdentFrom openBkt `List.cons;
  let nilId    := mkIdentFrom closeBkt `List.nil;
  pure $ args.foldSepArgs (fun arg r => mkAppStx consId [arg, r]) nilId

def mkExplicitBinder {α} (n : Syntax α) (type : Syntax α) : Syntax α :=
mkNode `Lean.Parser.Term.explicitBinder [mkAtom "(", mkNullNode [n], mkNullNode [mkAtom ":", type], mkNullNode [], mkAtom ")"]

@[builtinTermElab arrow] def elabArrow : TermElab :=
fun stx _ => do
  n ← mkFreshName;
  let id  := mkIdentFrom stx.val n;
  let dom := stx.getArg 0;
  let rng := stx.getArg 2;
  pure $ mkNode `Lean.Parser.Term.forall [mkAtom "forall", mkNullNode [mkExplicitBinder id dom], mkAtom ",", rng]

-/
end Elab
end Lean