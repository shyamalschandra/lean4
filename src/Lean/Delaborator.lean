/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich
-/

/-!
The delaborator is the first stage of the pretty printer, and the inverse of the
elaborator: it turns fully elaborated `Expr` core terms back into surface-level
`Syntax`, omitting some implicit information again and using higher-level syntax
abstractions like notations where possible. The exact behavior can be customized
using pretty printer options; activating `pp.all` should guarantee that the
delaborator is injective and that re-elaborating the resulting `Syntax`
round-trips.

Pretty printer options can be given not only for the whole term, but also
specific subterms. This is used both when automatically refining pp options
until round-trip and when interactively selecting pp options for a subterm (both
TBD). The association of options to subterms is done by assigning a unique,
synthetic Nat position to each subterm derived from its position in the full
term. This position is added to the corresponding Syntax object so that
elaboration errors and interactions with the pretty printer output can be traced
back to the subterm.

The delaborator is extensible via the `[delab]` attribute.
-/

import Lean.KeyedDeclsAttribute
import Lean.ProjFns
import Lean.Syntax
import Lean.Elab.Term

namespace Lean

-- TODO: move, maybe
namespace Level
protected partial def quote : Level → Syntax
| zero _       => Unhygienic.run `(level|0)
| l@(succ _ _) => match l.toNat with
  | some n => Unhygienic.run `(level|$(mkStxNumLitAux n):numLit)
  | none   => Unhygienic.run `(level|$(quote l.getLevelOffset) + $(mkStxNumLitAux l.getOffset):numLit)
| max l1 l2 _  => match_syntax quote l2 with
  | `(level|max $ls*) => Unhygienic.run `(level|max $(quote l1) $ls*)
  | l2                => Unhygienic.run `(level|max $(quote l1) $l2)
| imax l1 l2 _ => match_syntax quote l2 with
  | `(level|imax $ls*) => Unhygienic.run `(level|imax $(quote l1) $ls*)
  | l2                 => Unhygienic.run `(level|imax $(quote l1) $l2)
| param n _    => Unhygienic.run `(level|$(mkIdent n):ident)
-- HACK: approximation
| mvar  n _    => Unhygienic.run `(level|_)

instance HasQuote : HasQuote Level := ⟨Level.quote⟩
end Level

def getPPBinderTypes (o : Options) : Bool := o.get `pp.binder_types true
def getPPCoercions (o : Options) : Bool := o.get `pp.coercions true
def getPPExplicit (o : Options) : Bool := o.get `pp.explicit false
def getPPNotation (o : Options) : Bool := o.get `pp.notation true
def getPPStructureProjections (o : Options) : Bool := o.get `pp.structure_projections true
def getPPStructureInstances (o : Options) : Bool := o.get `pp.structure_instances true
def getPPStructureInstanceType (o : Options) : Bool := o.get `pp.structure_instance_type false
def getPPUniverses (o : Options) : Bool := o.get `pp.universes false
def getPPFullNames (o : Options) : Bool := o.get `pp.full_names false
def getPPPrivateNames (o : Options) : Bool := o.get `pp.private_names false
def getPPUnicode (o : Options) : Bool := o.get `pp.unicode true
def getPPAll (o : Options) : Bool := o.get `pp.all false

@[init] def ppOptions : IO Unit := do
registerOption `pp.explicit { defValue := false, group := "pp", descr := "(pretty printer) display implicit arguments" };
registerOption `pp.structure_instance_type { defValue := false, group := "pp", descr := "(pretty printer) display type of structure instances" };
-- TODO: register other options when old pretty printer is removed
--registerOption `pp.universes { defValue := false, group := "pp", descr := "(pretty printer) display universes" };
pure ()

/-- Associate pretty printer options to a specific subterm using a synthetic position. -/
abbrev OptionsPerPos := Std.RBMap Nat Options (fun a b => a < b)

namespace Delaborator
open Lean.Meta

structure Context :=
-- In contrast to other systems like the elaborator, we do not pass the current term explicitly as a
-- parameter, but store it in the monad so that we can keep it in sync with `pos`.
(expr           : Expr)
(pos            : Nat := 1)
(defaultOptions : Options)
(optionsPerPos  : OptionsPerPos)
(currNamespace  : Name)
(openDecls      : List OpenDecl)

-- Exceptions from delaborators are not expected. We use an internal exception to signal whether
-- the delaborator was able to produce a Syntax object.
def registerDelabFailureId : IO InternalExceptionId := registerInternalExceptionId `delabFailure
@[init registerDelabFailureId] constant delabFailureId : InternalExceptionId := arbitrary _

abbrev DelabM := ReaderT Context MetaM
abbrev Delab := DelabM Syntax

instance DelabM.inhabited {α} : Inhabited (DelabM α) := ⟨throw $ arbitrary _⟩

@[inline] protected def orelse {α} (d₁ d₂ : DelabM α) : DelabM α := do
catchInternalId delabFailureId d₁ (fun _ => d₂)
protected def failure {α} : DelabM α := throw $ Exception.internal delabFailureId
instance : Alternative DelabM :=
{ orelse  := fun _ => Delaborator.orelse,
  failure := fun _ => Delaborator.failure }
-- HACK: necessary since it would otherwise prefer the instance from MonadExcept
instance {α} : HasOrelse (DelabM α) := alternativeHasOrelse _ _

-- Macro scopes in the delaborator output are ultimately ignored by the pretty printer,
-- so give a trivial implementation.
instance DelabM.monadQuotation : MonadQuotation DelabM := {
  getCurrMacroScope   := pure $ arbitrary _,
  getMainModule       := pure $ arbitrary _,
  withFreshMacroScope := fun α x => x,
}

unsafe def mkDelabAttribute : IO (KeyedDeclsAttribute Delab) :=
KeyedDeclsAttribute.init {
  builtinName := `builtinDelab,
  name := `delab,
  descr := "Register a delaborator.

[delab k] registers a declaration of type `Lean.Delaborator.Delab` for the `Lean.Expr`
constructor `k`. Multiple delaborators for a single constructor are tried in turn until
the first success. If the term to be delaborated is an application of a constant `c`,
elaborators for `app.c` are tried first; this is also done for `Expr.const`s (\"nullary applications\")
to reduce special casing. If the term is an `Expr.mdata` with a single key `k`, `mdata.k`
is tried first.",
  valueTypeName := `Lean.Delaborator.Delab
} `Lean.Delaborator.delabAttribute
@[init mkDelabAttribute] constant delabAttribute : KeyedDeclsAttribute Delab := arbitrary _

def getExpr : DelabM Expr := do
ctx ← read;
pure ctx.expr

def getExprKind : DelabM Name := do
e ← getExpr;
pure $ match e with
| Expr.bvar _ _        => `bvar
| Expr.fvar _ _        => `fvar
| Expr.mvar _ _        => `mvar
| Expr.sort _ _        => `sort
| Expr.const c _ _     =>
  -- we identify constants as "nullary applications" to reduce special casing
  `app ++ c
| Expr.app fn _ _      => match fn.getAppFn with
  | Expr.const c _ _ => `app ++ c
  | _                => `app
| Expr.lam _ _ _ _     => `lam
| Expr.forallE _ _ _ _ => `forallE
| Expr.letE _ _ _ _ _  => `letE
| Expr.lit _ _         => `lit
| Expr.mdata m _ _     => match m.entries with
  | [(key, _)] => `mdata ++ key
  | _   => `mdata
| Expr.proj _ _ _ _    => `proj
| Expr.localE _ _ _ _  => `localE

/-- Evaluate option accessor, using subterm-specific options if set. Default to `true` if `pp.all` is set. -/
def getPPOption (opt : Options → Bool) : DelabM Bool := do
ctx ← read;
let opt := fun opts => opt opts || getPPAll opts;
let val := opt ctx.defaultOptions;
match ctx.optionsPerPos.find? ctx.pos with
| some opts => pure $ opt opts
| none      => pure val

def whenPPOption (opt : Options → Bool) (d : Delab) : Delab := do
b ← getPPOption opt;
if b then d else failure

def whenNotPPOption (opt : Options → Bool) (d : Delab) : Delab := do
b ← getPPOption opt;
if b then failure else d

/--
Descend into `child`, the `childIdx`-th subterm of the current term, and update position.

Because `childIdx < 3` in the case of `Expr`, we can injectively map a path
`childIdxs` to a natural number by computing the value of the 3-ary representation
`1 :: childIdxs`, since n-ary representations without leading zeros are unique.
Note that `pos` is initialized to `1` (case `childIdxs == []`).
-/
def descend {α} (child : Expr) (childIdx : Nat) (d : DelabM α) : DelabM α :=
adaptReader (fun (cfg : Context) => { cfg with expr := child, pos := cfg.pos * 3 + childIdx }) d

def withAppFn {α} (d : DelabM α) : DelabM α := do
Expr.app fn _ _ ← getExpr | unreachable!;
descend fn 0 d

def withAppArg {α} (d : DelabM α) : DelabM α := do
Expr.app _ arg _ ← getExpr | unreachable!;
descend arg 1 d

partial def withAppFnArgs {α} : DelabM α → (α → DelabM α) → DelabM α
| fnD, argD => do
  Expr.app fn arg _ ← getExpr | fnD;
  a ← withAppFn (withAppFnArgs fnD argD);
  withAppArg (argD a)

def withBindingDomain {α} (d : DelabM α) : DelabM α := do
e ← getExpr;
descend e.bindingDomain! 0 d

def withBindingBody {α} (n : Name) (d : DelabM α) : DelabM α := do
e ← getExpr;
withLocalDecl n e.binderInfo e.bindingDomain! fun fvar =>
  let b := e.bindingBody!.instantiate1 fvar;
  descend b 1 d

def withProj {α} (d : DelabM α) : DelabM α := do
Expr.proj _ _ e _ ← getExpr | unreachable!;
descend e 0 d

def withMDataExpr {α} (d : DelabM α) : DelabM α := do
Expr.mdata _ e _ ← getExpr | unreachable!;
descend e 0 d

partial def annotatePos (pos : Nat) : Syntax → Syntax
| stx@(Syntax.ident _ _ _ _)                   => stx.setInfo { pos := pos }
-- app => annotate function
| stx@(Syntax.node `Lean.Parser.Term.app args) => stx.modifyArg 0 annotatePos
-- otherwise, annotate first direct child token if any
| stx => match stx.getArgs.findIdx? Syntax.isAtom with
  | some idx => stx.modifyArg idx (Syntax.setInfo { pos := pos })
  | none     => stx

def annotateCurPos (stx : Syntax) : Delab := do
ctx ← read;
pure $ annotatePos ctx.pos stx

@[inline] def liftMetaM {α} (x : MetaM α) : DelabM α :=
liftM x

partial def delabFor : Name → Delab
| k => do
  env ← getEnv;
  (match (delabAttribute.ext.getState env).table.find? k with
   | some delabs => delabs.firstM id >>= annotateCurPos
   | none        => failure) <|>
  (match k with
   | Name.str Name.anonymous _ _ => failure
   | Name.str n              _ _ => delabFor n.getRoot  -- have `app.Option.some` fall back to `app` etc.
   | _                           => failure)

def delab : Delab := do
k ← getExprKind;
delabFor k <|> (liftM $ show MetaM Syntax from throwError $ "don't know how to delaborate '" ++ toString k ++ "'")

@[builtinDelab fvar]
def delabFVar : Delab := do
Expr.fvar id _ ← getExpr | unreachable!;
catch
  do { l ← getLocalDecl id; pure $ mkIdent l.userName }
  -- loose free variable, use internal name
  fun _ => pure $ mkIdent id

-- loose bound variable, use pseudo syntax
@[builtinDelab bvar]
def delabBVar : Delab := do
Expr.bvar idx _ ← getExpr | unreachable!;
pure $ mkIdent $ mkNameSimple $ "#" ++ toString idx

@[builtinDelab mvar]
def delabMVar : Delab := do
Expr.mvar n _ ← getExpr | unreachable!;
let n := n.replacePrefix `_uniq `m;
`(?$(mkIdent n))

@[builtinDelab sort]
def delabSort : Delab := do
Expr.sort l _ ← getExpr | unreachable!;
match l with
| Level.zero _ => `(Prop)
| Level.succ (Level.zero _) _ => `(Type)
| _ => match l.dec with
  | some l' => `(Type $(quote l'))
  | none    => `(Sort $(quote l))

-- find shorter names for constants, in reverse to Lean.Elab.ResolveName

private def unresolveQualifiedName (ns : Name) (c : Name) : DelabM Name := do
let c' := c.replacePrefix ns Name.anonymous;
env ← getEnv;
guard $ c' != c && !c'.isAnonymous && (!c'.isAtomic || !isProtected env c);
pure c'

private def unresolveUsingNamespace (c : Name) : Name → DelabM Name
| ns@(Name.str p _ _) => do
  unresolveQualifiedName ns c <|> unresolveUsingNamespace p
| _ => failure

private def unresolveOpenDecls (c : Name) : List OpenDecl → DelabM Name
| [] => failure
| OpenDecl.simple ns exs :: openDecls =>
  let c' := c.replacePrefix ns Name.anonymous;
  if c' != c && exs.elem c' then unresolveOpenDecls openDecls
  else
    unresolveQualifiedName ns c <|> unresolveOpenDecls openDecls
| OpenDecl.explicit openedId resolvedId :: openDecls =>
  guard (c == resolvedId) *> pure openedId <|> unresolveOpenDecls openDecls

-- NOTE: not a registered delaborator, as `const` is never called (see [delab] description)
def delabConst : Delab := do
Expr.const c ls _ ← getExpr | unreachable!;
c ← condM (getPPOption getPPFullNames) (pure c) do {
  ctx ← read;
  env ← getEnv;
  let as := getRevAliases env c;
  -- might want to use a more clever heuristic such as selecting the shortest alias...
  let c := as.headD c;
  unresolveUsingNamespace c ctx.currNamespace <|> unresolveOpenDecls c ctx.openDecls <|> pure c
};
c ← condM (getPPOption getPPPrivateNames)
  (pure c)
  (pure $ (privateToUserName? c).getD c);
ppUnivs ← getPPOption getPPUniverses;
if ls.isEmpty || !ppUnivs then
  pure $ mkIdent c
else
  `($(mkIdent c).{$(mkSepArray (ls.toArray.map quote) (mkAtom ","))*})

inductive ParamKind
| explicit
-- combines implicit params, optParams, and autoParams
| implicit (defVal : Option Expr)

/-- Return array with n-th element set to kind of n-th parameter of `e`. -/
def getParamKinds (e : Expr) : MetaM (Array ParamKind) := do
t ← inferType e;
forallTelescopeReducing t $ fun params _ =>
  params.mapM $ fun param => do
    l ← getLocalDecl param.fvarId!;
    match l.type.getOptParamDefault? with
    | some val => pure $ ParamKind.implicit val
    | _ => if l.type.isAutoParam || !l.binderInfo.isExplicit then
        pure $ ParamKind.implicit none
      else
        pure ParamKind.explicit

@[builtinDelab app]
def delabAppExplicit : Delab := do
(fnStx, argStxs) ← withAppFnArgs
  (do
    fn ← getExpr;
    stx ← if fn.isConst then delabConst else delab;
    paramKinds ← liftM $ getParamKinds fn <|> pure #[];
    stx ← if paramKinds.any (fun k => match k with | ParamKind.explicit => false | _ => true) then `(@$stx) else pure stx;
    pure (stx, #[]))
  (fun ⟨fnStx, argStxs⟩ => do
    argStx ← delab;
    pure (fnStx, argStxs.push argStx));
-- avoid degenerate `app` node
if argStxs.isEmpty then pure fnStx else `($fnStx $argStxs*)

@[builtinDelab app]
def delabAppImplicit : Delab := whenNotPPOption getPPExplicit $ do
(fnStx, _, argStxs) ← withAppFnArgs
  (do
    fn ← getExpr;
    stx ← if fn.isConst then delabConst else delab;
    paramKinds ← liftM $ getParamKinds fn <|> pure #[];
    pure (stx, paramKinds.toList, #[]))
  (fun ⟨fnStx, paramKinds, argStxs⟩ => do
    arg ← getExpr;
    let implicit := match paramKinds with
      | [ParamKind.implicit (some v)] => !v.hasLooseBVars && v == arg
      | ParamKind.implicit none :: _ => true
      | _                            => false;
    if implicit then
      pure (fnStx, paramKinds.tailD [], argStxs)
    else do
      argStx ← delab;
      pure (fnStx, paramKinds.tailD [], argStxs.push argStx));
-- avoid degenerate `app` node
if argStxs.isEmpty then pure fnStx else `($fnStx $argStxs*)

@[builtinDelab mdata]
def elabMData : Delab :=
-- ignore mdata by default
withMDataExpr delab

/--
Check for a `Syntax.ident` of the given name anywhere in the tree.
This is usually a bad idea since it does not check for shadowing bindings,
but in the delaborator we assume that bindings are never shadowed.
-/
partial def hasIdent (id : Name) : Syntax → Bool
| Syntax.ident _ _ id' _ => id == id'
| Syntax.node _ args     => args.any hasIdent
| _                      => false

/--
Return `true` iff current binder should be merged with the nested
binder, if any, into a single binder group:
* both binders must have same binder info and domain
* they cannot be inst-implicit (`[a b : A]` is not valid syntax)
* `pp.binder_types` must be the same value for both terms
* prefer `fun a b` over `fun (a b)`
-/
private def shouldGroupWithNext : DelabM Bool := do
e ← getExpr;
ppEType ← getPPOption getPPBinderTypes;
let go (e' : Expr) := do {
  ppE'Type ← withBindingBody `_ $ getPPOption getPPBinderTypes;
  pure $ e.binderInfo == e'.binderInfo &&
    e.bindingDomain! == e'.bindingDomain! &&
    e'.binderInfo != BinderInfo.instImplicit &&
    ppEType == ppE'Type &&
    (e'.binderInfo != BinderInfo.default || ppE'Type)
};
match e with
| Expr.lam _ _     e'@(Expr.lam _ _ _ _) _     => go e'
| Expr.forallE _ _ e'@(Expr.forallE _ _ _ _) _ => go e'
| _ => pure false

private partial def delabBinders (delabGroup : Array Syntax → Syntax → Delab) : optParam (Array Syntax) #[] → Delab
-- Accumulate names (`Syntax.ident`s with position information) of the current, unfinished
-- binder group `(d e ...)` as determined by `shouldGroupWithNext`. We cannot do grouping
-- inside-out, on the Syntax level, because it depends on comparing the Expr binder types.
| curNames => do
  lctx ← liftMetaM $ getLCtx;
  e ← getExpr;
  let n := lctx.getUnusedName e.bindingName!;
  stxN ← annotateCurPos (mkIdent n);
  let curNames := curNames.push stxN;
  condM shouldGroupWithNext
    -- group with nested binder => recurse immediately
    (withBindingBody n $ delabBinders curNames)
    -- don't group => delab body and prepend current binder group
    (withBindingBody n delab >>= delabGroup curNames)

@[builtinDelab lam]
def delabLam : Delab :=
delabBinders $ fun curNames stxBody => do
  e ← getExpr;
  stxT ← withBindingDomain delab;
  ppTypes ← getPPOption getPPBinderTypes;
  expl ← getPPOption getPPExplicit;
  -- leave lambda implicit if possible
  let blockImplicitLambda := expl ||
    e.binderInfo == BinderInfo.default ||
    Elab.Term.blockImplicitLambda stxBody ||
    curNames.any (fun n => hasIdent n.getId stxBody);
  if !blockImplicitLambda then
    pure stxBody
  else do
    group ← match e.binderInfo, ppTypes with
      | BinderInfo.default,     true   => do
        -- "default" binder group is the only one that expects binder names
        -- as a term, i.e. a single `Syntax.ident` or an application thereof
        stxCurNames ← if curNames.size > 1 then `($(curNames.get! 0) $(curNames.eraseIdx 0)*)
          else pure $ curNames.get! 0;
        `(funBinder| ($stxCurNames : $stxT))
      | BinderInfo.default,     false  => pure curNames.back  -- here `curNames.size == 1`
      | BinderInfo.implicit,    true   => `(funBinder| {$curNames* : $stxT})
      | BinderInfo.implicit,    false  => `(funBinder| {$curNames*})
      | BinderInfo.instImplicit, _     => `(funBinder| [$curNames.back : $stxT])  -- here `curNames.size == 1`
      | _                      , _     => unreachable!;
    match_syntax stxBody with
    | `(fun $binderGroups* => $stxBody) => `(fun $group $binderGroups* => $stxBody)
    | _                                 => `(fun $group => $stxBody)

@[builtinDelab forallE]
def delabForall : Delab :=
delabBinders $ fun curNames stxBody => do
  e ← getExpr;
  stxT ← withBindingDomain delab;
  match e.binderInfo with
  | BinderInfo.default      =>
    -- heuristic: use non-dependent arrows only if possible for whole group to avoid
    -- noisy mix like `(α : Type) → Type → (γ : Type) → ...`.
    let dependent := curNames.any $ fun n => hasIdent n.getId stxBody;
    -- NOTE: non-dependent arrows are available only for the default binder info
    if dependent then do
      `(($curNames* : $stxT) → $stxBody)
    else
      curNames.foldrM (fun _ stxBody => `($stxT → $stxBody)) stxBody
  | BinderInfo.implicit     => `({$curNames* : $stxT} → $stxBody)
  -- here `curNames.size == 1`
  | BinderInfo.instImplicit => `([$curNames.back : $stxT] → $stxBody)
  | _                       => unreachable!

@[builtinDelab letE]
def delabLetE : Delab := do
Expr.letE n t v b _ ← getExpr | unreachable!;
lctx ← getLCtx;
let n := lctx.getUnusedName n;
stxT ← descend t 0 delab;
stxV ← descend v 1 delab;
stxB ← withLetDecl n t v (fun fvar =>
  let b := b.instantiate1 fvar;
  descend b 2 delab);
`(let $(mkIdent n) : $stxT := $stxV; $stxB)

@[builtinDelab lit]
def delabLit : Delab := do
Expr.lit l _ ← getExpr | unreachable!;
match l with
| Literal.natVal n => pure $ quote n
| Literal.strVal s => pure $ quote s

-- `ofNat 0` ~> `0`
@[builtinDelab app.HasOfNat.ofNat]
def delabOfNat : Delab := whenPPOption getPPCoercions $ do
e@(Expr.app _ (Expr.lit (Literal.natVal n) _) _) ← getExpr | failure;
pure $ quote n

/--
Delaborate a projection primitive. These do not usually occur in
user code, but are pretty-printed when e.g. `#print`ing a projection
function.
-/
@[builtinDelab proj]
def delabProj : Delab := do
Expr.proj _ idx _ _ ← getExpr | unreachable!;
e ← withProj delab;
-- not perfectly authentic: elaborates to the `idx`-th named projection
-- function (e.g. `e.1` is `Prod.fst e`), which unfolds to the actual
-- `proj`.
let idx := mkStxLit fieldIdxKind (toString (idx + 1));
`($(e).$idx:fieldIdx)

/-- Delaborate a call to a projection function such as `Prod.fst`. -/
@[builtinDelab app]
def delabProjectionApp : Delab := whenPPOption getPPStructureProjections $ do
e@(Expr.app fn _ _) ← getExpr | failure;
Expr.const c@(Name.str _ f _) _ _ ← pure fn.getAppFn | failure;
env ← getEnv;
some info ← pure $ env.getProjectionFnInfo? c | failure;
-- can't use with classes since the instance parameter is implicit
guard $ !info.fromClass;
-- projection function should be fully applied (#struct params + 1 instance parameter)
-- TODO: support over-application
guard $ e.getAppNumArgs == info.nparams + 1;
-- If pp.explicit is true, and the structure has parameters, we should not
-- use field notation because we will not be able to see the parameters.
expl ← getPPOption getPPExplicit;
guard $ !expl || info.nparams == 0;
appStx ← withAppArg delab;
`($(appStx).$(mkIdent f):ident)

@[builtinDelab app]
def delabStructureInstance : Delab := whenPPOption getPPStructureInstances do
env ← getEnv;
e ← getExpr;
some s ← pure $ e.isConstructorApp? env | failure;
guard $ isStructure env s.induct;
/- If implicit arguments should be shown, and the structure has parameters, we should not
   pretty print using { ... }, because we will not be able to see the parameters. -/
explicit ← getPPOption getPPExplicit;
guard !(explicit && s.nparams > 0);
let fieldNames := getStructureFields env s.induct;
(_, fields) ← withAppFnArgs (pure (0, #[])) fun ⟨idx, fields⟩ => if idx < s.nparams then pure (idx + 1, fields) else do {
  val ← delab;
  let field := Syntax.node `Lean.Parser.Term.structInstField #[
    mkIdent $ fieldNames.get! (idx - s.nparams),
    mkNullNode,
    mkAtom ":=",
    val
  ];
  pure (idx + 1, fields.push field)
};
let fields := mkSepArray fields (mkAtom ",");
condM (getPPOption getPPStructureInstanceType)
  (do
    ty ← inferType e;
    -- `ty` is not actually part of `e`, but since `e` must be an application or constant, we know that
    -- index 2 is unused.
    stxTy ← descend ty 2 delab;
    `({ $fields:structInstField* : $stxTy }))
  `({ $fields:structInstField* })

@[builtinDelab app.Prod.mk]
def delabTuple : Delab := whenPPOption getPPNotation do
e ← getExpr;
guard $ e.getAppNumArgs == 4;
a ← withAppFn $ withAppArg delab;
b ← withAppArg delab;
match_syntax b with
| `(($b, $bs*)) =>
  let bs := #[b, mkAtom ","] ++ bs;
  `(($a, $bs*))
| _ => `(($a, $b))

-- abbrev coe {α : Sort u} {β : Sort v} (a : α) [CoeT α a β] : β
@[builtinDelab app.coe]
def delabCoe : Delab := whenPPOption getPPCoercions $ do
e ← getExpr;
guard $ e.getAppNumArgs >= 4;
-- delab as application, then discard function
stx ← delabAppImplicit;
match_syntax stx with
| `($fn $args*) =>
  if args.size == 1 then
    pure $ args.get! 0
  else
    `($(args.get! 0) $(args.eraseIdx 0)*)
| _             => failure

-- abbrev coeFun {α : Sort u} {γ : α → Sort v} (a : α) [CoeFun α γ] : γ a
@[builtinDelab app.coeFun]
def delabCoeFun : Delab := delabCoe

def delabInfixOp (op : Bool → Syntax → Syntax → Delab) : Delab := whenPPOption getPPNotation do
stx ← delabAppImplicit <|> delabAppExplicit;
guard $ stx.isOfKind `Lean.Parser.Term.app && (stx.getArg 1).getNumArgs == 2;
unicode ← getPPOption getPPUnicode;
let args := stx.getArg 1;
op unicode (args.getArg 0) (args.getArg 1)

def delabPrefixOp (op : Bool → Syntax → Delab) : Delab := whenPPOption getPPNotation do
stx ← delabAppImplicit <|> delabAppExplicit;
guard $ stx.isOfKind `Lean.Parser.Term.app && (stx.getArg 1).getNumArgs == 1;
unicode ← getPPOption getPPUnicode;
let args := stx.getArg 1;
op unicode (args.getArg 0)

@[builtinDelab app.Prod] def delabProd : Delab := delabInfixOp fun _ x y => `($x × $y)
@[builtinDelab app.Function.comp] def delabFComp : Delab := delabInfixOp fun _ x y => `($x ∘ $y)

@[builtinDelab app.HasAdd.add] def delabAdd : Delab := delabInfixOp fun _ x y => `($x + $y)
@[builtinDelab app.HasSub.sub] def delabSub : Delab := delabInfixOp fun _ x y => `($x - $y)
@[builtinDelab app.HasMul.mul] def delabMul : Delab := delabInfixOp fun _ x y => `($x * $y)
@[builtinDelab app.HasDiv.div] def delabDiv : Delab := delabInfixOp fun _ x y => `($x / $y)
@[builtinDelab app.HasMod.mod] def delabMod : Delab := delabInfixOp fun _ x y => `($x % $y)
@[builtinDelab app.HasModN.modn] def delabModN : Delab := delabInfixOp fun _ x y => `($x %ₙ $y)
@[builtinDelab app.HasPow.pow] def delabPow : Delab := delabInfixOp fun _ x y => `($x ^ $y)

@[builtinDelab app.HasLessEq.LessEq] def delabLE : Delab := delabInfixOp fun b x y => cond b `($x ≤ $y) `($x <= $y)
@[builtinDelab app.GreaterEq] def delabGE : Delab := delabInfixOp fun b x y => cond b `($x ≥ $y) `($x >= $y)
@[builtinDelab app.HasLess.Less] def delabLT : Delab := delabInfixOp fun _ x y => `($x < $y)
@[builtinDelab app.Greater] def delabGT : Delab := delabInfixOp fun _ x y => `($x > $y)
@[builtinDelab app.Eq] def delabEq : Delab := delabInfixOp fun _ x y => `($x = $y)
@[builtinDelab app.Ne] def delabNe : Delab := delabInfixOp fun _ x y => `($x ≠ $y)
@[builtinDelab app.HasBeq.beq] def delabBEq : Delab := delabInfixOp fun _ x y => `($x == $y)
@[builtinDelab app.bne] def delabBNe : Delab := delabInfixOp fun _ x y => `($x != $y)
@[builtinDelab app.HEq] def delabHEq : Delab := delabInfixOp fun b x y => cond b `($x ≅ $y) `($x ~= $y)
@[builtinDelab app.HasEquiv.Equiv] def delabEquiv : Delab := delabInfixOp fun _ x y => `($x ≈ $y)

@[builtinDelab app.And] def delabAnd : Delab := delabInfixOp fun b x y => cond b `($x ∧ $y) `($x /\ $y)
@[builtinDelab app.Or] def delabOr : Delab := delabInfixOp fun b x y => cond b `($x ∨ $y) `($x || $y)
@[builtinDelab app.Iff] def delabIff : Delab := delabInfixOp fun b x y => cond b `($x ↔ $y) `($x <-> $y)

@[builtinDelab app.and] def delabBAnd : Delab := delabInfixOp fun _ x y => `($x && $y)
@[builtinDelab app.or] def delabBOr : Delab := delabInfixOp fun _ x y => `($x || $y)

@[builtinDelab app.HasAppend.append] def delabAppend : Delab := delabInfixOp fun _ x y => `($x ++ $y)
@[builtinDelab app.List.cons] def delabCons : Delab := delabInfixOp fun _ x y => `($x :: $y)

@[builtinDelab app.HasAndthen.andthen] def delabAndThen : Delab := delabInfixOp fun _ x y => `($x >> $y)
@[builtinDelab app.HasBind.bind] def delabBind : Delab := delabInfixOp fun _ x y => `($x >>= $y)

@[builtinDelab app.HasSeq.seq] def delabseq : Delab := delabInfixOp fun _ x y => `($x <*> $y)
@[builtinDelab app.HasSeqLeft.seqLeft] def delabseqLeft : Delab := delabInfixOp fun _ x y => `($x <* $y)
@[builtinDelab app.HasSeqRight.seqRight] def delabseqRight : Delab := delabInfixOp fun _ x y => `($x *> $y)

@[builtinDelab app.Functor.map] def delabMap : Delab := delabInfixOp fun _ x y => `($x <$> $y)
@[builtinDelab app.Functor.mapRev] def delabMapRev : Delab := delabInfixOp fun _ x y => `($x <&> $y)

@[builtinDelab app.HasOrelse.orelse] def delabOrElse : Delab := delabInfixOp fun _ x y => `($x <|> $y)
@[builtinDelab app.orM] def delabOrM : Delab := delabInfixOp fun _ x y => `($x <||> $y)
@[builtinDelab app.andM] def delabAndM : Delab := delabInfixOp fun _ x y => `($x <&&> $y)

@[builtinDelab app.Not] def delabNot : Delab := delabPrefixOp fun _ x => `(¬ $x)
@[builtinDelab app.not] def delabBNot : Delab := delabPrefixOp fun _ x => `(! $x)

end Delaborator

/-- "Delaborate" the given term into surface-level syntax using the default and given subterm-specific options. -/
def delab (currNamespace : Name) (openDecls : List OpenDecl) (e : Expr) (optionsPerPos : OptionsPerPos := {}) : MetaM Syntax := do
opts ← getOptions;
catchInternalId Delaborator.delabFailureId
  (Delaborator.delab.run { expr := e, defaultOptions := opts, optionsPerPos := optionsPerPos, currNamespace := currNamespace, openDecls := openDecls })
  (fun _ => unreachable!)

end Lean
