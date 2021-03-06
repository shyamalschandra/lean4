/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.InternalExceptionId
import Lean.Meta.Exception

namespace Lean
namespace Elab

def registerPostponeId : IO InternalExceptionId :=
registerInternalExceptionId `postpone
@[init registerPostponeId]
constant postponeExceptionId : InternalExceptionId := arbitrary _

def registerUnsupportedSyntaxId : IO InternalExceptionId :=
registerInternalExceptionId `unsupportedSyntax
@[init registerUnsupportedSyntaxId]
constant unsupportedSyntaxExceptionId : InternalExceptionId := arbitrary _

def registerAbortElabId : IO InternalExceptionId :=
registerInternalExceptionId `abortElab
@[init registerAbortElabId]
constant abortExceptionId : InternalExceptionId := arbitrary _

def throwPostpone {α m} [MonadExceptOf Exception m] : m α :=
throw $ Exception.internal postponeExceptionId

def throwUnsupportedSyntax {α m} [MonadExceptOf Exception m] : m α :=
throw $ Exception.internal unsupportedSyntaxExceptionId

def throwIllFormedSyntax {α m} [Monad m] [MonadExceptOf Exception m] [Ref m] [AddErrorMessageContext m] : m α :=
throwError "ill-formed syntax"

def throwAlreadyDeclaredUniverseLevel {α m} [Monad m] [MonadExceptOf Exception m] [Ref m] [AddErrorMessageContext m] (u : Name) : m α :=
throwError ("a universe level named '" ++ toString u ++ "' has already been declared")

-- Throw exception to abort elaboration without producing any error message
def throwAbort {α m} [MonadExcept Exception m] : m α :=
throw $ Exception.internal abortExceptionId

def mkMessageCore (fileName : String) (fileMap : FileMap) (msgData : MessageData) (severity : MessageSeverity) (pos : String.Pos) : Message :=
let pos := fileMap.toPosition pos;
{ fileName := fileName, pos := pos, data := msgData, severity := severity }

end Elab
end Lean
