new_frontend

structure A :=
(x : Nat := 0)

def foo : A :=
{}

theorem ex1 : foo = { x := 0 } :=
rfl

theorem ex2 : foo.x = 0 :=
rfl

instance : HasEmptyc A :=
⟨{ x := 10 }⟩

def boo : A :=
{}  -- this is ambiguous
