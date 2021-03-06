/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Meta.Basic
import Lean.Meta.InferType

namespace Lean
namespace Meta

private partial def decAux? : Level → MetaM (Option Level)
| Level.zero _        => pure none
| Level.param _ _     => pure none
| Level.mvar mvarId _ => do
  mctx ← getMCtx;
  match mctx.getLevelAssignment? mvarId with
  | some u => decAux? u
  | none   =>
    condM (isReadOnlyLevelMVar mvarId) (pure none) $ do
      u ← mkFreshLevelMVar;
      assignLevelMVar mvarId (mkLevelSucc u);
      pure u
| Level.succ u _  => pure u
| u =>
  let process (u v : Level) : MetaM (Option Level) := do {
    u? ← decAux? u;
    match u? with
    | none   => pure none
    | some u => do
      v? ← decAux? v;
      match v? with
      | none   => pure none
      | some v => pure $ mkLevelMax u v
  };
  match u with
  | Level.max u v _  => process u v
  /- Remark: If `decAux? v` returns `some ...`, then `imax u v` is equivalent to `max u v`. -/
  | Level.imax u v _ => process u v
  | _                => unreachable!

variables {m : Type → Type} [MonadLiftT MetaM m]

private def decLevelImp (u : Level) : MetaM (Option Level) := do
mctx ← getMCtx;
result? ← decAux? u;
match result? with
| some v => pure $ some v
| none   => do
  modify $ fun s => { s with mctx := mctx };
  pure none

def decLevel? (u : Level) : m (Option Level) :=
liftMetaM $ decLevelImp u

def decLevel (u : Level) : m Level := liftMetaM do
u? ← decLevel? u;
match u? with
| some u => pure u
| none   => throwError ("invalid universe level, " ++ u ++ " is not greater than 0")

/- This method is useful for inferring universe level parameters for function that take arguments such as `{α : Type u}`.
   Recall that `Type u` is `Sort (u+1)` in Lean. Thus, given `α`, we must infer its universe level,
   and then decrement 1 to obtain `u`. -/
def getDecLevel (type : Expr) : m Level := liftMetaM do
u ← getLevel type;
decLevel u

private def strictOccursMaxAux (lvl : Level) : Level → Bool
| Level.max u v _ => strictOccursMaxAux u || strictOccursMaxAux v
| u               => u != lvl && lvl.occurs u

/--
  Return true iff `lvl` occurs in `max u_1 ... u_n` and `lvl != u_i` for all `i in [1, n]`.
  That is, `lvl` is a proper level subterm of some `u_i`. -/
private def strictOccursMax (lvl : Level) : Level → Bool
| Level.max u v _ => strictOccursMaxAux lvl u || strictOccursMaxAux lvl v
| _               => false

/-- `mkMaxArgsDiff mvarId (max u_1 ... (mvar mvarId) ... u_n) v` => `max v u_1 ... u_n` -/
private def mkMaxArgsDiff (mvarId : MVarId) : Level → Level → Level
| Level.max u v _,     acc => mkMaxArgsDiff v $ mkMaxArgsDiff u acc
| l@(Level.mvar id _), acc => if id != mvarId then mkLevelMax acc l else acc
| l,                   acc => mkLevelMax acc l

/--
  Solve `?m =?= max ?m v` by creating a fresh metavariable `?n`
  and assigning `?m := max ?n v` -/
private def solveSelfMax (mvarId : MVarId) (v : Level) : MetaM Unit := do
n ← mkFreshLevelMVar;
assignLevelMVar mvarId $ mkMaxArgsDiff mvarId v n

private def postponeIsLevelDefEq (lhs : Level) (rhs : Level) : DefEqM Unit :=
modify fun postponed => postponed.push { lhs := lhs, rhs := rhs }

@[specialize] private def solve (isLevelDefEqAux : Level → Level → DefEqM Bool) (u v : Level) : DefEqM LBool := do
match u, v with
| Level.mvar mvarId _, _ =>
  condM (isReadOnlyLevelMVar mvarId)
    (pure LBool.undef)
    (if !u.occurs v then do
       assignLevelMVar u.mvarId! v; pure LBool.true
     else if !strictOccursMax u v then  do
       liftM $ solveSelfMax u.mvarId! v; pure LBool.true
     else
       pure LBool.undef)
| Level.zero _, Level.max v₁ v₂ _ =>
  Bool.toLBool <$> (isLevelDefEqAux levelZero v₁ <&&> isLevelDefEqAux levelZero v₂)
| Level.zero _, Level.imax _ v₂ _ =>
  Bool.toLBool <$> isLevelDefEqAux levelZero v₂
| Level.succ u _, v               => do
  v? ← Meta.decLevel? v;
  match v? with
  | some v => Bool.toLBool <$> isLevelDefEqAux u v
  | none   => pure LBool.undef
| _, _ => pure LBool.undef

partial def isLevelDefEqAux : Level → Level → DefEqM Bool
| Level.succ lhs _, Level.succ rhs _ => isLevelDefEqAux lhs rhs
| lhs, rhs =>
  if lhs == rhs then
    pure true
  else do
    trace! `Meta.isLevelDefEq.step (lhs ++ " =?= " ++ rhs);
    lhs' ← instantiateLevelMVars lhs;
    let lhs' := lhs'.normalize;
    rhs' ← instantiateLevelMVars rhs;
    let rhs' := rhs'.normalize;
    if lhs != lhs' || rhs != rhs' then
      isLevelDefEqAux lhs' rhs'
    else do
      r ← solve isLevelDefEqAux lhs rhs;
      if r != LBool.undef then pure $ r == LBool.true else do
      r ← solve isLevelDefEqAux rhs lhs;
      if r != LBool.undef then pure $ r == LBool.true else do
      mctx ← getMCtx;
      if !mctx.hasAssignableLevelMVar lhs && !mctx.hasAssignableLevelMVar rhs then do
        ctx ← read;
        if ctx.config.isDefEqStuckEx && (lhs.isMVar || rhs.isMVar) then do
          trace! `Meta.isLevelDefEq.stuck (lhs ++ " =?= " ++ rhs);
          Meta.throwIsDefEqStuck
        else
          pure false
      else do
        postponeIsLevelDefEq lhs rhs; pure true

def isListLevelDefEqAux : List Level → List Level → DefEqM Bool
| [],    []    => pure true
| u::us, v::vs => isLevelDefEqAux u v <&&> isListLevelDefEqAux us vs
| _,     _     => pure false

private def getNumPostponed : DefEqM Nat := do
s ← get; pure s.size

open Std (PersistentArray)

private def getResetPostponed : DefEqM (PersistentArray PostponedEntry) := do
ps ← get;
modify fun _ => {};
pure ps

private def processPostponedStep : DefEqM Bool :=
traceCtx `Meta.isLevelDefEq.postponed.step $ do
  ps ← getResetPostponed;
  ps.foldlM
    (fun (r : Bool) (p : PostponedEntry) =>
      if r then
        isLevelDefEqAux p.lhs p.rhs
      else
        pure false)
    true

private partial def processPostponedAux : Unit → DefEqM Bool
| _ => do
  numPostponed ← getNumPostponed;
  if numPostponed == 0 then
    pure true
  else do
    trace! `Meta.isLevelDefEq.postponed ("processing #" ++ toString numPostponed ++ " postponed is-def-eq level constraints");
    r ← processPostponedStep;
    if !r then
      pure r
    else do
      numPostponed' ← getNumPostponed;
      if numPostponed' == 0 then
        pure true
      else if numPostponed' < numPostponed then
        processPostponedAux ()
      else do
        trace! `Meta.isLevelDefEq.postponed (format "no progress solving pending is-def-eq level constraints");
        pure false

private def processPostponed : DefEqM Bool := do
numPostponed ← getNumPostponed;
if numPostponed == 0 then pure true
else traceCtx `Meta.isLevelDefEq.postponed $ processPostponedAux ()

private def restore (env : Environment) (mctx : MetavarContext) (postponed : PersistentArray PostponedEntry) : DefEqM Unit := do
setEnv env;
setMCtx mctx;
set postponed

/--
  `commitWhen x` executes `x` and process all postponed universe level constraints produced by `x`.
  We keep the modifications only if `processPostponed` return true and `x` returned `true`.

  Remark: postponed universe level constraints must be solved before returning. Otherwise,
  we don't know whether `x` really succeeded. -/
@[specialize] def commitWhen (x : DefEqM Bool) : DefEqM Bool := do
env  ← getEnv;
mctx ← getMCtx;
postponed ← getResetPostponed;
catch
  (do
    condM x
      (condM processPostponed
        (pure true)
        (do restore env mctx postponed; pure false))
      (do restore env mctx postponed; pure false))
  (fun ex => do restore env mctx postponed; throw ex)

private def runDefEqM (x : DefEqM Bool) : MetaM Bool :=
(commitWhen x).run' {}

def isLevelDefEq (u v : Level) : m Bool := liftMetaM do
traceCtx `Meta.isLevelDefEq do
  b ← runDefEqM $ Meta.isLevelDefEqAux u v;
  trace! `Meta.isLevelDefEq (u ++ " =?= " ++ v ++ " ... " ++ if b then "success" else "failure");
  pure b

def isExprDefEq (t s : Expr) : m Bool := liftMetaM do
traceCtx `Meta.isDefEq $ do
  b ← runDefEqM $ Meta.isExprDefEqAux t s;
  trace! `Meta.isDefEq (t ++ " =?= " ++ s ++ " ... " ++ if b then "success" else "failure");
  pure b

abbrev isDefEq (t s : Expr) : m Bool :=
isExprDefEq t s

def isExprDefEqGuarded (a b : Expr) : m Bool := liftMetaM do
catch (isExprDefEq a b) (fun _ => pure false)

abbrev isDefEqGuarded (t s : Expr) : m Bool :=
isExprDefEqGuarded t s

def isDefEqNoConstantApprox (t s : Expr) : m Bool := liftMetaM do
approxDefEq $ isDefEq t s

@[init] private def regTraceClasses : IO Unit := do
registerTraceClass `Meta.isLevelDefEq;
registerTraceClass `Meta.isLevelDefEq.step;
registerTraceClass `Meta.isLevelDefEq.postponed

end Meta
end Lean
