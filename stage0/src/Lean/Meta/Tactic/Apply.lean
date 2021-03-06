/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Util.FindMVar
import Lean.Meta.ExprDefEq
import Lean.Meta.SynthInstance
import Lean.Meta.CollectMVars
import Lean.Meta.Tactic.Util

namespace Lean
namespace Meta

/-
  Compute the number of expected arguments and whether the result type is of the form
  (?m ...) where ?m is an unassigned metavariable.
-/
private def getExpectedNumArgsAux (e : Expr) : MetaM (Nat × Bool) :=
withReducible $ forallTelescopeReducing e $ fun xs body =>
  pure (xs.size, body.getAppFn.isMVar)

private def getExpectedNumArgs (e : Expr) : MetaM Nat := do
(numArgs, _) ← getExpectedNumArgsAux e;
pure numArgs

private def throwApplyError {α} (mvarId : MVarId) (eType : Expr) (targetType : Expr) : MetaM α :=
throwTacticEx `apply mvarId ("failed to unify" ++ indentExpr eType ++ Format.line ++ "with" ++ indentExpr targetType)

def synthAppInstances (tacticName : Name) (mvarId : MVarId) (newMVars : Array Expr) (binderInfos : Array BinderInfo) : MetaM Unit :=
newMVars.size.forM $ fun i =>
  when (binderInfos.get! i).isInstImplicit $ do
    let mvar := newMVars.get! i;
    mvarType ← inferType mvar;
    mvarVal  ← synthInstance mvarType;
    unlessM (isDefEq mvar mvarVal) $
      throwTacticEx tacticName mvarId ("failed to assign synthesized instance")

def appendParentTag (mvarId : MVarId) (newMVars : Array Expr) (binderInfos : Array BinderInfo) : MetaM Unit := do
parentTag ← getMVarTag mvarId;
if newMVars.size == 1 then
  -- if there is only one subgoal, we inherit the parent tag
  setMVarTag (newMVars.get! 0).mvarId! parentTag
else unless parentTag.isAnonymous $
  newMVars.size.forM $ fun i =>
    let newMVarId := (newMVars.get! i).mvarId!;
    unlessM (isExprMVarAssigned newMVarId) $
    unless (binderInfos.get! i).isInstImplicit $ do
      currTag ← getMVarTag newMVarId;
      setMVarTag newMVarId (appendTag parentTag currTag)

def postprocessAppMVars (tacticName : Name) (mvarId : MVarId) (newMVars : Array Expr) (binderInfos : Array BinderInfo) : MetaM Unit := do
synthAppInstances tacticName mvarId newMVars binderInfos;
-- TODO: default and auto params
appendParentTag mvarId newMVars binderInfos

private def dependsOnOthers (mvar : Expr) (otherMVars : Array Expr) : MetaM Bool :=
otherMVars.anyM $ fun otherMVar =>
  if mvar == otherMVar then pure false
  else do
    otherMVarType ← inferType otherMVar;
    pure $ (otherMVarType.findMVar? $ fun mvarId => mvarId == mvar.mvarId!).isSome

private def reorderNonDependentFirst (newMVars : Array Expr) : MetaM (List MVarId) := do
(nonDeps, deps) ← newMVars.foldlM
  (fun (acc : Array MVarId × Array MVarId) (mvar : Expr) => do
    let (nonDeps, deps) := acc;
    let currMVarId := mvar.mvarId!;
    condM (dependsOnOthers mvar newMVars)
      (pure (nonDeps, deps.push currMVarId))
      (pure (nonDeps.push currMVarId, deps)))
  (#[], #[]);
pure $ nonDeps.toList ++ deps.toList

inductive ApplyNewGoals
| nonDependentFirst | nonDependentOnly | all

def apply (mvarId : MVarId) (e : Expr) : MetaM (List MVarId) :=
withMVarContext mvarId $ do
  checkNotAssigned mvarId `apply;
  targetType ← getMVarType mvarId;
  eType      ← inferType e;
  (numArgs, hasMVarHead) ← getExpectedNumArgsAux eType;
  numArgs    ← if !hasMVarHead then pure numArgs else do {
    targetTypeNumArgs ← getExpectedNumArgs targetType;
    pure (numArgs - targetTypeNumArgs)
  };
  (newMVars, binderInfos, eType) ← forallMetaTelescopeReducing eType (some numArgs);
  unlessM (isDefEq eType targetType) $ throwApplyError mvarId eType targetType;
  postprocessAppMVars `apply mvarId newMVars binderInfos;
  e ← instantiateMVars e;
  assignExprMVar mvarId (mkAppN e newMVars);
  newMVars ← newMVars.filterM $ fun mvar => not <$> isExprMVarAssigned mvar.mvarId!;
  otherMVarIds ← getMVarsNoDelayed e;
  -- TODO: add option `ApplyNewGoals` and implement other orders
  newMVarIds ← reorderNonDependentFirst newMVars;
  let otherMVarIds := otherMVarIds.filter fun mvarId => !newMVarIds.contains mvarId;
  pure $ newMVarIds ++ otherMVarIds.toList

end Meta
end Lean
