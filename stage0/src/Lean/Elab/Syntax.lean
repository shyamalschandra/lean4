/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Elab.Command
import Lean.Elab.Quotation

namespace Lean
namespace Elab

namespace Term

/-
Expand `optional «precedence»` where
 «precedence» := parser! " : " >> precedenceLit
 precedenceLit : Parser := numLit <|> maxSymbol
 maxSymbol := parser! nonReservedSymbol "max" -/
def expandOptPrecedence (stx : Syntax) : Option Nat :=
if stx.isNone then none
else match ((stx.getArg 0).getArg 1).isNatLit? with
  | some v => some v
  | _      => some Parser.maxPrec

private def mkParserSeq (ds : Array Syntax) : TermElabM Syntax :=
if ds.size == 0 then
  throwUnsupportedSyntax
else if ds.size == 1 then
  pure $ ds.get! 0
else
  ds.foldlFromM (fun r d => `(ParserDescr.andthen $r $d)) (ds.get! 0) 1

structure ToParserDescrContext :=
(catName              : Name)
(first                : Bool)
(leftRec              : Bool) -- true iff left recursion is allowed
/- When `leadingIdentAsSymbol == true` we convert
   `Lean.Parser.Syntax.atom` into `Lean.ParserDescr.nonReservedSymbol`
   See comment at `Parser.ParserCategory`. -/
(leadingIdentAsSymbol : Bool)

abbrev ToParserDescrM := ReaderT ToParserDescrContext (StateRefT Bool TermElabM)
private def markAsTrailingParser : ToParserDescrM Unit := set true

@[inline] private def withNotFirst {α} (x : ToParserDescrM α) : ToParserDescrM α :=
adaptReader (fun (ctx : ToParserDescrContext) => { ctx with first := false }) x

@[inline] private def withoutLeftRec {α} (x : ToParserDescrM α) : ToParserDescrM α :=
adaptReader (fun (ctx : ToParserDescrContext) => { ctx with leftRec := false }) x

def checkLeftRec (stx : Syntax) : ToParserDescrM Bool := do
ctx ← read;
if ctx.first && stx.getKind == `Lean.Parser.Syntax.cat then do
  let cat := (stx.getIdAt 0).eraseMacroScopes;
  if cat == ctx.catName then do
    let prec? : Option Nat  := expandOptPrecedence (stx.getArg 1);
    unless prec?.isNone $ throwErrorAt (stx.getArg 1) ("invalid occurrence of ':<num>' modifier in head");
    unless ctx.leftRec $
      throwErrorAt (stx.getArg 3) ("invalid occurrence of '" ++ cat ++ "', parser algorithm does not allow this form of left recursion");
    markAsTrailingParser; -- mark as trailing par
    pure true
  else
    pure false
else
  pure false

partial def toParserDescrAux : Syntax → ToParserDescrM Syntax
| stx =>
  let kind := stx.getKind;
  if kind == nullKind then do
    let args := stx.getArgs;
    condM (checkLeftRec (stx.getArg 0))
      (do
        when (args.size == 1) $ throwErrorAt stx "invalid atomic left recursive syntax";
        let args := args.eraseIdx 0;
        args ← args.mapIdxM $ fun i arg => withNotFirst $ toParserDescrAux arg;
        liftM $ mkParserSeq args)
      (do
        args ← args.mapIdxM $ fun i arg => withNotFirst $ toParserDescrAux arg;
        liftM $ mkParserSeq args)
  else if kind == choiceKind then do
    toParserDescrAux (stx.getArg 0)
  else if kind == `Lean.Parser.Syntax.paren then
    toParserDescrAux (stx.getArg 1)
  else if kind == `Lean.Parser.Syntax.cat then do
    let cat := (stx.getIdAt 0).eraseMacroScopes;
    ctx ← read;
    if ctx.first && cat == ctx.catName then
      throwErrorAt stx "invalid atomic left recursive syntax"
    else do
      let prec? : Option Nat  := expandOptPrecedence (stx.getArg 1);
      env ← getEnv;
      if Parser.isParserCategory env cat then
        let prec := prec?.getD 0;
        `(ParserDescr.cat $(quote cat) $(quote prec))
      else do
        -- `cat` is not a valid category name. Thus, we test whether it is a valid constant
        candidates ← liftM $ resolveGlobalConst cat;
        let candidates := candidates.filter fun c =>
            match env.find? c with
            | none      => false
            | some info =>
              match info.type with
              | Expr.const `Lean.Parser.TrailingParser _ _ => true
              | Expr.const `Lean.Parser.Parser _ _         => true
              | Expr.const `Lean.ParserDescr _ _           => true
              | Expr.const `Lean.TrailingParserDescr _ _   => true
              | _                                          => false;
         match candidates with
         | []  => throwErrorAt (stx.getArg 3) ("unknown category '" ++ cat ++ "' or parser declaration")
         | [c] => do
           unless prec?.isNone $ throwErrorAt (stx.getArg 3) "unexpected precedence";
           `(ParserDescr.parser $(quote c))
         | cs  => throwErrorAt (stx.getArg 3) ("ambiguous parser declaration " ++ toString cs)
  else if kind == `Lean.Parser.Syntax.atom then do
    match (stx.getArg 0).isStrLit? with
    | some atom => do
      ctx ← read;
      if ctx.leadingIdentAsSymbol then
        `(ParserDescr.nonReservedSymbol $(quote atom) false)
      else
        `(ParserDescr.symbol $(quote atom))
    | none => throwUnsupportedSyntax
  else if kind == `Lean.Parser.Syntax.num then
    `(ParserDescr.numLit)
  else if kind == `Lean.Parser.Syntax.str then
    `(ParserDescr.strLit)
  else if kind == `Lean.Parser.Syntax.char then
    `(ParserDescr.charLit)
  else if kind == `Lean.Parser.Syntax.ident then
    `(ParserDescr.ident)
  else if kind == `Lean.Parser.Syntax.try then do
    d ← withoutLeftRec $ toParserDescrAux (stx.getArg 1);
    `(ParserDescr.try $d)
  else if kind == `Lean.Parser.Syntax.notFollowedBy then do
    d ← withoutLeftRec $ toParserDescrAux (stx.getArg 1);
    `(ParserDescr.notFollowedBy $d)
  else if kind == `Lean.Parser.Syntax.lookahead then do
    d ← withoutLeftRec $ toParserDescrAux (stx.getArg 1);
    `(ParserDescr.lookahead $d)
  else if kind == `Lean.Parser.Syntax.sepBy then do
    d₁ ← withoutLeftRec $ toParserDescrAux (stx.getArg 1);
    d₂ ← withoutLeftRec $ toParserDescrAux (stx.getArg 2);
    `(ParserDescr.sepBy $d₁ $d₂)
  else if kind == `Lean.Parser.Syntax.sepBy1 then do
    d₁ ← withoutLeftRec $ toParserDescrAux (stx.getArg 1);
    d₂ ← withoutLeftRec $ toParserDescrAux (stx.getArg 2);
    `(ParserDescr.sepBy1 $d₁ $d₂)
  else if kind == `Lean.Parser.Syntax.many then do
    d ← withoutLeftRec $ toParserDescrAux (stx.getArg 0);
    `(ParserDescr.many $d)
  else if kind == `Lean.Parser.Syntax.many1 then do
    d ← withoutLeftRec $ toParserDescrAux (stx.getArg 0);
    `(ParserDescr.many1 $d)
  else if kind == `Lean.Parser.Syntax.optional then do
    d ← withoutLeftRec $ toParserDescrAux (stx.getArg 0);
    `(ParserDescr.optional $d)
  else if kind == `Lean.Parser.Syntax.orelse then do
    d₁ ← withoutLeftRec $ toParserDescrAux (stx.getArg 0);
    d₂ ← withoutLeftRec $ toParserDescrAux (stx.getArg 2);
    `(ParserDescr.orelse $d₁ $d₂)
  else do
    stxNew? ← liftM (liftMacroM (expandMacro? stx) : TermElabM _);
    match stxNew? with
    | some stxNew => toParserDescrAux stxNew
    | none => throwErrorAt stx $ "unexpected syntax kind of category `syntax`: " ++ kind

/--
  Given a `stx` of category `syntax`, return a pair `(newStx, trailingParser)`,
  where `newStx` is of category `term`. After elaboration, `newStx` should have type
  `TrailingParserDescr` if `trailingParser == true`, and `ParserDescr` otherwise. -/
def toParserDescr (stx : Syntax) (catName : Name) : TermElabM (Syntax × Bool) := do
env ← getEnv;
let leadingIdentAsSymbol := Parser.leadingIdentAsSymbol env catName;
(toParserDescrAux stx { catName := catName, first := true, leftRec := true, leadingIdentAsSymbol := leadingIdentAsSymbol }).run false

end Term

namespace Command

private def getCatSuffix (catName : Name) : String :=
match catName with
| Name.str _ s _ => s
| _              => unreachable!

private def declareSyntaxCatQuotParser (catName : Name) : CommandElabM Unit := do
let quotSymbol := "`(" ++ getCatSuffix catName ++ "|";
let kind := catName ++ `quot;
cmd ← `(@[termParser] def $(mkIdent kind) : Lean.ParserDescr := Lean.ParserDescr.node $(quote kind) $(quote Lean.Parser.maxPrec) (Lean.ParserDescr.andthen (Lean.ParserDescr.symbol $(quote quotSymbol)) (Lean.ParserDescr.andthen (Lean.ParserDescr.cat $(quote catName) 0) (Lean.ParserDescr.symbol ")"))));
elabCommand cmd

@[builtinCommandElab syntaxCat] def elabDeclareSyntaxCat : CommandElab :=
fun stx => do
  let catName  := stx.getIdAt 1;
  let attrName := catName.appendAfter "Parser";
  env ← getEnv;
  env ← liftIO $ Parser.registerParserCategory env attrName catName;
  setEnv env;
  declareSyntaxCatQuotParser catName

def mkKindName (catName : Name) : Name :=
`_kind ++ catName

def mkFreshKind (catName : Name) : CommandElabM Name := do
scp ← getCurrMacroScope;
mainModule ← getMainModule;
pure $ Lean.addMacroScope mainModule (mkKindName catName) scp

def Macro.mkFreshKind (catName : Name) : MacroM Name :=
Macro.addMacroScope (mkKindName catName)

private def elabKindPrio (stx : Syntax) (catName : Name) : CommandElabM (Name × Nat) := do
if stx.isNone then do
  k ← mkFreshKind catName;
  pure (k, 0)
else
  let mkKind (stx : Syntax) : CommandElabM Name := do {
    let kind := stx.getId;
    if kind.hasMacroScopes then
      pure kind
    else do
      currNamespace ← getCurrNamespace;
      pure (currNamespace ++ kind)
  };
  let arg := stx.getArg 1;
  if arg.getKind == `Lean.Parser.Command.parserKind then do
    k ← mkKind (arg.getArg 0);
    pure (k, 0)
  else if arg.getKind == `Lean.Parser.Command.parserPrio then do
    k ← mkFreshKind catName;
    let prio := (arg.getArg 0).isNatLit?.getD 0;
    pure (k, prio)
  else if arg.getKind == `Lean.Parser.Command.parserKindPrio then do
    k ← mkKind (arg.getArg 0);
    let prio := (arg.getArg 2).isNatLit?.getD 0;
    pure (k, prio)
  else
    throwError "unexpected syntax kind/priority"


/- We assume a new syntax can be treated as an atom when it starts and ends with a token.
   Here are examples of atom-like syntax.
   ```
   syntax "(" term ")" : term
   syntax "[" (sepBy term ",") "]" : term
   syntax "foo" : term
   ```
 -/
private partial def isAtomLikeSyntax : Syntax → Bool
| stx =>
  let kind := stx.getKind;
  if kind == nullKind then
    isAtomLikeSyntax (stx.getArg 0) && isAtomLikeSyntax (stx.getArg (stx.getNumArgs - 1))
  else if kind == choiceKind then
    isAtomLikeSyntax (stx.getArg 0) -- see toParserDescrAux
  else if kind == `Lean.Parser.Syntax.paren then
    isAtomLikeSyntax (stx.getArg 1)
  else
    kind == `Lean.Parser.Syntax.atom

/-
def «syntax»      := parser! "syntax " >> optPrecedence >> optKindPrio >> many1 syntaxParser >> " : " >> ident
-/
@[builtinCommandElab «syntax»] def elabSyntax : CommandElab :=
fun stx => do
  env ← getEnv;
  let cat := (stx.getIdAt 5).eraseMacroScopes;
  unless (Parser.isParserCategory env cat) $ throwErrorAt (stx.getArg 5) ("unknown category '" ++ cat ++ "'");
  let syntaxParser := stx.getArg 3;
  -- If the user did not provide an explicit precedence, we assign `maxPrec` to atom-like syntax and `leadPrec` otherwise.
  let precDefault  := if isAtomLikeSyntax syntaxParser then Parser.maxPrec else Parser.leadPrec;
  let prec := (Term.expandOptPrecedence (stx.getArg 1)).getD precDefault;
  (kind, prio) ← elabKindPrio (stx.getArg 2) cat;
  let catParserId := mkIdentFrom stx (cat.appendAfter "Parser");
  (val, trailingParser) ← runTermElabM none $ fun _ => Term.toParserDescr syntaxParser cat;
  d ←
    if trailingParser then
      `(@[$catParserId:ident $(quote prio):numLit] def $(mkIdentFrom stx kind) : Lean.TrailingParserDescr := ParserDescr.trailingNode $(quote kind) $(quote prec) $val)
    else
      `(@[$catParserId:ident $(quote prio):numLit] def $(mkIdentFrom stx kind) : Lean.ParserDescr := ParserDescr.node $(quote kind) $(quote prec) $val);
  trace `Elab fun _ => d;
  withMacroExpansion stx d $ elabCommand d

/-
def syntaxAbbrev  := parser! "syntax " >> ident >> " := " >> many1 syntaxParser
-/
@[builtinCommandElab «syntaxAbbrev»] def elabSyntaxAbbrev : CommandElab :=
fun stx => do
  let declName := stx.getArg 1;
  (val, _) ← runTermElabM none $ fun _ => Term.toParserDescr (stx.getArg 3) Name.anonymous;
  stx' ← `(def $declName : Lean.ParserDescr := $val);
  withMacroExpansion stx stx' $ elabCommand stx'

def elabMacroRulesAux (k : SyntaxNodeKind) (alts : Array Syntax) : CommandElabM Syntax := do
alts ← alts.mapSepElemsM $ fun alt => do {
  let lhs := alt.getArg 0;
  let pat := lhs.getArg 0;
  when (!pat.isQuot) $
    throwUnsupportedSyntax;
  let quot := pat.getArg 1;
  let k' := quot.getKind;
  if k' == k then
    pure alt
  else if k' == choiceKind then do
     match quot.getArgs.find? $ fun quotAlt => quotAlt.getKind == k with
     | none      => throwErrorAt alt ("invalid macro_rules alternative, expected syntax node kind '" ++ k ++ "'")
     | some quot => do
       let pat := pat.setArg 1 quot;
       let lhs := lhs.setArg 0 pat;
       pure $ alt.setArg 0 lhs
  else
    throwErrorAt alt ("invalid macro_rules alternative, unexpected syntax node kind '" ++ k' ++ "'")
};
`(@[macro $(Lean.mkIdent k)] def myMacro : Macro := fun stx => match_syntax stx with $alts:matchAlt* | _ => throw Lean.Macro.Exception.unsupportedSyntax)

def inferMacroRulesAltKind (alt : Syntax) : CommandElabM SyntaxNodeKind := do
let lhs := alt.getArg 0;
let pat := lhs.getArg 0;
when (!pat.isQuot) $
  throwUnsupportedSyntax;
let quot := pat.getArg 1;
pure quot.getKind

def elabNoKindMacroRulesAux (alts : Array Syntax) : CommandElabM Syntax := do
k ← inferMacroRulesAltKind (alts.get! 0);
if k == choiceKind then
  throwErrorAt (alts.get! 0)
    "invalid macro_rules alternative, multiple interpretations for pattern (solution: specify node kind using `macro_rules [<kind>] ...`)"
else do
  altsK    ← alts.filterSepElemsM (fun alt => do k' ← inferMacroRulesAltKind alt; pure $ k == k');
  altsNotK ← alts.filterSepElemsM (fun alt => do k' ← inferMacroRulesAltKind alt; pure $ k != k');
  defCmd   ← elabMacroRulesAux k altsK;
  if altsNotK.isEmpty then
    pure defCmd
  else
    `($defCmd:command macro_rules $altsNotK:matchAlt*)

@[builtinCommandElab «macro_rules»] def elabMacroRules : CommandElab :=
adaptExpander $ fun stx => match_syntax stx with
| `(macro_rules $alts:matchAlt*)           => elabNoKindMacroRulesAux alts
| `(macro_rules | $alts:matchAlt*)         => elabNoKindMacroRulesAux alts
| `(macro_rules [$kind] $alts:matchAlt*)   => elabMacroRulesAux kind.getId alts
| `(macro_rules [$kind] | $alts:matchAlt*) => elabMacroRulesAux kind.getId alts
| _                                        => throwUnsupportedSyntax

@[builtinMacro Lean.Parser.Command.mixfix] def expandMixfix : Macro :=
fun stx => match_syntax stx with
| `(infix:$prec $op => $f)   => `(infixl:$prec $op => $f)
| `(infixr:$prec $op => $f)  => `(notation:$prec lhs $op:strLit rhs:$prec => $f lhs rhs)
| `(infixl:$prec $op => $f)  =>  let prec1 : Syntax := quote (prec.toNat+1); `(notation:$prec lhs $op:strLit rhs:$prec1 => $f lhs rhs)
| `(prefix:$prec $op => $f)  => `(notation:$prec $op:strLit arg:$prec => $f arg)
| `(postfix:$prec $op => $f) => `(notation:$prec arg $op:strLit => $f arg)
| _ => Macro.throwUnsupported

/- Wrap all occurrences of the given `ident` nodes in antiquotations -/
private partial def antiquote (vars : Array Syntax) : Syntax → Syntax
| stx => match_syntax stx with
| `($id:ident) =>
  if (vars.findIdx? (fun var => var.getId == id.getId)).isSome then
    Syntax.node `antiquot #[mkAtom "$", mkNullNode, id, mkNullNode, mkNullNode]
  else
    stx
| _ => match stx with
  | Syntax.node k args => Syntax.node k (args.map antiquote)
  | stx => stx

/- Convert `notation` command lhs item into a `syntax` command item -/
def expandNotationItemIntoSyntaxItem (stx : Syntax) : MacroM Syntax :=
let k := stx.getKind;
if k == `Lean.Parser.Command.identPrec then
  pure $ Syntax.node `Lean.Parser.Syntax.cat #[mkIdentFrom stx `term,  stx.getArg 1]
else if k == quotedSymbolKind then
  match stx.getArg 1 with
  | Syntax.atom info val => pure $ Syntax.node `Lean.Parser.Syntax.atom #[mkStxStrLit val info]
  | _                    => Macro.throwUnsupported
else if k == strLitKind then
  pure $ Syntax.node `Lean.Parser.Syntax.atom #[stx]
else
  Macro.throwUnsupported

def strLitToPattern (stx: Syntax) : MacroM Syntax :=
match stx.isStrLit? with
| some str => pure $ mkAtomFrom stx str
| none     => Macro.throwUnsupported

/- Convert `notation` command lhs item a pattern element -/
def expandNotationItemIntoPattern (stx : Syntax) : MacroM Syntax :=
let k := stx.getKind;
if k == `Lean.Parser.Command.identPrec then
  let item := stx.getArg 0;
  pure $ mkNode `antiquot #[mkAtom "$", mkNullNode, item, mkNullNode, mkNullNode]
else if k == quotedSymbolKind then
  pure $ stx.getArg 1
else if k == strLitKind then
  strLitToPattern stx
else
  Macro.throwUnsupported

private def expandNotationAux (ref : Syntax) (prec? : Option Syntax) (items : Array Syntax) (rhs : Syntax) : MacroM Syntax := do
kind ← Macro.mkFreshKind `term;
-- build parser
syntaxParts ← items.mapM expandNotationItemIntoSyntaxItem;
let cat := mkIdentFrom ref `term;
-- build macro rules
let vars := items.filter $ fun item => item.getKind == `Lean.Parser.Command.identPrec;
let vars := vars.map $ fun var => var.getArg 0;
let rhs := antiquote vars rhs;
patArgs ← items.mapM expandNotationItemIntoPattern;
let pat := Syntax.node kind patArgs;
match prec? with
| none      => `(syntax [$(mkIdentFrom ref kind):ident] $syntaxParts* : $cat macro_rules | `($pat) => `($rhs))
| some prec => `(syntax:$prec [$(mkIdentFrom ref kind):ident] $syntaxParts* : $cat macro_rules | `($pat) => `($rhs))

@[builtinMacro Lean.Parser.Command.notation] def expandNotation : Macro :=
fun stx =>
match_syntax stx with
| `(notation:$prec $items* => $rhs)    => expandNotationAux stx prec items rhs
| `(notation $items:notationItem* => $rhs) => expandNotationAux stx none items rhs
| _ => Macro.throwUnsupported

/- Convert `macro` argument into a `syntax` command item -/
def expandMacroArgIntoSyntaxItem (stx : Syntax) : MacroM Syntax :=
let k := stx.getKind;
if k == `Lean.Parser.Command.macroArgSimple then
  pure $ stx.getArg 2
else if k == strLitKind then
  pure $ Syntax.node `Lean.Parser.Syntax.atom #[stx]
else
  Macro.throwUnsupported

/- Convert `macro` head into a `syntax` command item -/
def expandMacroHeadIntoSyntaxItem (stx : Syntax) : MacroM Syntax :=
if stx.isIdent then
  let info := stx.getHeadInfo.getD {};
  let id   := stx.getId;
  pure $ Syntax.node `Lean.Parser.Syntax.atom #[mkStxStrLit (toString id) info]
else
  expandMacroArgIntoSyntaxItem stx

/- Convert `macro` arg into a pattern element -/
def expandMacroArgIntoPattern (stx : Syntax) : MacroM Syntax :=
let k := stx.getKind;
if k == `Lean.Parser.Command.macroArgSimple then
  let item := stx.getArg 0;
  pure $ mkNode `antiquot #[mkAtom "$", mkNullNode, item, mkNullNode, mkNullNode]
else if k == strLitKind then
  strLitToPattern stx
else
  Macro.throwUnsupported

/- Convert `macro` head into a pattern element -/
def expandMacroHeadIntoPattern (stx : Syntax) : MacroM Syntax :=
if stx.isIdent then
  pure $ mkAtomFrom stx (toString stx.getId)
else
  expandMacroArgIntoPattern stx

@[builtinMacro Lean.Parser.Command.macro] def expandMacro : Macro :=
fun stx => do
  let prec := (stx.getArg 1).getArgs;
  let head := stx.getArg 2;
  let args := (stx.getArg 3).getArgs;
  let cat  := stx.getArg 5;
  kind ← Macro.mkFreshKind (cat.getId).eraseMacroScopes;
  -- build parser
  stxPart  ← expandMacroHeadIntoSyntaxItem head;
  stxParts ← args.mapM expandMacroArgIntoSyntaxItem;
  let stxParts := #[stxPart] ++ stxParts;
  -- build macro rules
  patHead ← expandMacroHeadIntoPattern head;
  patArgs ← args.mapM expandMacroArgIntoPattern;
  let pat := Syntax.node kind (#[patHead] ++ patArgs);
  if stx.getArgs.size == 8 then
    -- `stx` is of the form `macro $head $args* : $cat => term`
    let rhs := stx.getArg 7;
    `(syntax $prec* [$(mkIdentFrom stx kind):ident] $stxParts* : $cat macro_rules | `($pat) => $rhs)
  else
    -- `stx` is of the form `macro $head $args* : $cat => `( $body )`
    let rhsBody := stx.getArg 8;
    `(syntax $prec* [$(mkIdentFrom stx kind):ident] $stxParts* : $cat macro_rules | `($pat) => `($rhsBody))

@[init] private def regTraceClasses : IO Unit := do
registerTraceClass `Elab.syntax;
pure ()

@[inline] def withExpectedType (expectedType? : Option Expr) (x : Expr → TermElabM Expr) : TermElabM Expr := do
Term.tryPostponeIfNoneOrMVar expectedType?;
some expectedType ← pure expectedType?
  | throwError "expected type must be known";
x expectedType

/-
def elabTail := try (" : " >> ident) >> darrow >> termParser
parser! "elab " >> optPrecedence >> elabHead >> many elabArg >> elabTail
-/
@[builtinMacro Lean.Parser.Command.elab] def expandElab : Macro :=
fun stx => do
  let ref := stx;
  let prec    := (stx.getArg 1).getArgs;
  let head    := stx.getArg 2;
  let args    := (stx.getArg 3).getArgs;
  let cat     := stx.getArg 5;
  let expectedTypeSpec := stx.getArg 6;
  let rhs     := stx.getArg 8;
  let catName := cat.getId;
  kind ← Macro.mkFreshKind catName.eraseMacroScopes;
  -- build parser
  stxPart  ← expandMacroHeadIntoSyntaxItem head;
  stxParts ← args.mapM expandMacroArgIntoSyntaxItem;
  let stxParts := #[stxPart] ++ stxParts;
  -- build pattern for `martch_syntax
  patHead ← expandMacroHeadIntoPattern head;
  patArgs ← args.mapM expandMacroArgIntoPattern;
  let pat := Syntax.node kind (#[patHead] ++ patArgs);
  let kindId    := mkIdentFrom ref kind;
  if expectedTypeSpec.hasArgs then
    if catName == `term then
      let expId := expectedTypeSpec.getArg 1;
      `(syntax $prec* [$kindId:ident] $stxParts* : $cat @[termElab $kindId:ident] def elabFn : Lean.Elab.Term.TermElab := fun stx expectedType? => match_syntax stx with | `($pat) => Lean.Elab.Command.withExpectedType expectedType? fun $expId => $rhs | _ => throwUnsupportedSyntax)
    else
      Macro.throwError expectedTypeSpec ("syntax category '" ++ toString catName ++ "' does not support expected type specification")
  else if catName == `term then
    `(syntax $prec* [$kindId:ident] $stxParts* : $cat @[termElab $kindId:ident] def elabFn : Lean.Elab.Term.TermElab := fun stx _ => match_syntax stx with | `($pat) => $rhs | _ => throwUnsupportedSyntax)
  else if catName == `command then
    `(syntax $prec* [$kindId:ident] $stxParts* : $cat @[commandElab $kindId:ident] def elabFn : Lean.Elab.Command.CommandElab := fun stx => match_syntax stx with | `($pat) => $rhs | _ => throwUnsupportedSyntax)
  else if catName == `tactic then
    `(syntax $prec* [$kindId:ident] $stxParts* : $cat @[tactic $kindId:ident] def elabFn : Lean.Elab.Tactic.Tactic := fun stx => match_syntax stx with | `(tactic|$pat) => $rhs | _ => throwUnsupportedSyntax)
  else
    -- We considered making the command extensible and support new user-defined categories. We think it is unnecessary.
    -- If users want this feature, they add their own `elab` macro that uses this one as a fallback.
    Macro.throwError ref ("unsupported syntax category '" ++ toString catName ++ "'")

end Command
end Elab
end Lean
