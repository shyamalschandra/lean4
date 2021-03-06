/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Meta.LevelDefEq
import Lean.Elab.Exception
import Lean.Elab.Log

namespace Lean
namespace Elab
namespace Level

structure Context :=
(ref        : Syntax)
(levelNames : List Name)

structure State :=
(ngen : NameGenerator)
(mctx : MetavarContext)

abbrev LevelElabM := ReaderT Context (EStateM Exception State)

instance : Ref LevelElabM :=
{ getRef      := do ctx ← read; pure ctx.ref,
  withRef     := fun α ref x => adaptReader (fun (ctx : Context) => { ctx with ref := ref }) x }

instance : AddMessageContext LevelElabM :=
{ addMessageContext  := fun msg => pure msg }

instance : MonadNameGenerator LevelElabM :=
{ getNGen := do s ← get; pure s.ngen,
  setNGen := fun ngen => modify fun s => { s with ngen := ngen } }

def mkFreshLevelMVar : LevelElabM Level := do
mvarId ← mkFreshId;
modify $ fun s => { s with mctx := s.mctx.addLevelMVarDecl mvarId };
pure $ mkLevelMVar mvarId

partial def elabLevel : Syntax → LevelElabM Level
| stx => withRef stx do
  let kind := stx.getKind;
  if kind == `Lean.Parser.Level.paren then
    elabLevel (stx.getArg 1)
  else if kind == `Lean.Parser.Level.max then do
    let args := (stx.getArg 1).getArgs;
    lvl ← elabLevel args.back;
    args.foldrRangeM 0 (args.size - 1)
      (fun stx lvl => do
        arg ← elabLevel stx;
        pure (mkLevelMax lvl arg))
      lvl
  else if kind == `Lean.Parser.Level.imax then do
    let args := (stx.getArg 1).getArgs;
    lvl ← elabLevel args.back;
    args.foldrRangeM 0 (args.size - 1)
      (fun stx lvl => do
        arg ← elabLevel stx;
        pure (mkLevelIMax lvl arg))
      lvl
  else if kind == `Lean.Parser.Level.hole then do
    mkFreshLevelMVar
  else if kind == numLitKind then do
    match stx.isNatLit? with
    | some val => pure (Level.ofNat val)
    | none     => throwIllFormedSyntax
  else if kind == identKind then do
    let paramName := stx.getId;
    ctx ← read;
    unless (ctx.levelNames.contains paramName) $ throwError ("unknown universe level " ++ paramName);
    pure $ mkLevelParam paramName
  else if kind == `Lean.Parser.Level.addLit then do
    lvl ← elabLevel (stx.getArg 0);
    match (stx.getArg 2).isNatLit? with
    | some val => pure (lvl.addOffset val)
    | none     => throwIllFormedSyntax
  else
    throwError "unexpected universe level syntax kind"

end Level

export Level (LevelElabM)

end Elab
end Lean
