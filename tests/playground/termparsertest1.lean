import init.lean.parser.term
open Lean
open Lean.Parser

def testParser (input : String) : IO Unit :=
do
env ← mkEmptyEnvironment;
termPTables ← builtinTermParsingTable.get;
stx ← IO.ofExcept $ runParser env termPTables input "<input>" "expr";
IO.println stx

def main (xs : List String) : IO Unit :=
do
testParser "x.{u v+1}";
testParser "x";
testParser "x.{max u v}";
testParser "x.{(max u v) 0}";
testParser "f 0 1";
testParser "f.{u+1} \"foo\" x";
testParser "(f x, 0, 1)";
testParser "()";
testParser "(f x)";
testParser "(f x : Type)";
testParser "h (f x) (g y)";
pure ()