/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Data.Name

namespace Lean

inductive OpenDecl
| simple   (ns : Name) (except : List Name)
| explicit (id : Name) (declName : Name)

namespace OpenDecl
instance : Inhabited OpenDecl := ⟨simple Name.anonymous []⟩

instance : HasToString OpenDecl :=
⟨fun decl => match decl with
 | explicit id decl => toString id ++ " → " ++ toString decl
 | simple ns ex     => toString ns ++ (if ex == [] then "" else " hiding " ++ toString ex)⟩

end OpenDecl

def rootNamespace := `_root_

def removeRoot (n : Name) : Name :=
n.replacePrefix rootNamespace Name.anonymous

end Lean
