new_frontend

abbrev M := ReaderT String $ StateT Nat $ ReaderT Bool $ IO


def f : M Nat := do
let s ← read
IO.println s
let b ← readThe Bool
IO.println b
let s ← get
pure s

#eval (f "hello").run' 10 true

def g : M Nat :=
let a : M Nat := adaptTheReader Bool not f
adaptReader (fun s => s ++ " world") a

#eval (g "hello").run' 10 true
