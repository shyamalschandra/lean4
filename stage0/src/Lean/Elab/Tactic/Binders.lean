/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Elab.Tactic.Basic

namespace Lean
namespace Elab
namespace Tactic

private def liftTermBinderSyntax : Macro :=
fun stx => do
  hole ← `(?_);
  match stx.getKind with
  | Name.str (Name.str p "Tactic" _) s _ =>
    let kind := mkNameStr (mkNameStr p "Term") s;
    let termStx := Syntax.node kind (stx.getArgs ++ #[mkAtomFrom stx "; ", hole]);
    `(tactic| refine $termStx)
  | _ => Macro.throwError stx "unexpected binder syntax"

@[builtinMacro Lean.Parser.Tactic.have] def expandHaveTactic : Macro := liftTermBinderSyntax
@[builtinMacro Lean.Parser.Tactic.let] def expandLetTactic : Macro := liftTermBinderSyntax
@[builtinMacro Lean.Parser.Tactic.«let!»] def expandLetBangTactic : Macro := liftTermBinderSyntax
@[builtinMacro Lean.Parser.Tactic.suffices] def expandSufficesTactic : Macro := liftTermBinderSyntax

@[builtinMacro Lean.Parser.Tactic.show] def expandShowTactic : Macro :=
fun stx =>
  let type := stx.getArg 1;
  `(tactic| refine (show $type from ?_))

end Tactic
end Elab
end Lean
