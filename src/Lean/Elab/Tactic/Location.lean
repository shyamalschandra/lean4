/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
namespace Lean
namespace Elab
namespace Tactic

inductive Location
| wildcard
| target
| localDecls (userNames : Array Name)

/-
Recall that
```
def locationWildcard := parser! "*"
def locationTarget   := parser! unicodeSymbol "⊢" "|-"
def locationHyp      := parser! many1 ident
def location         := parser! "at " >> (locationWildcard <|> locationTarget <|> locationHyp)
```
-/
def expandLocation (stx : Syntax) : Location :=
let arg := stx.getArg 1;
if arg.getKind == `Lean.Parser.Tactic.locationWildcard then Location.wildcard
else if arg.getKind == `Lean.Parser.Tactic.locationTarget then Location.target
else Location.localDecls $ (arg.getArg 0).getArgs.map fun stx => stx.getId

def expandOptLocation (stx : Syntax) : Location :=
if stx.isNone then Location.target
else expandLocation $ stx.getArg 0

end Tactic
end Elab
end Lean
