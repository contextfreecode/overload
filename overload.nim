type
  A = ref object of RootObj
  B = ref object of A

method say(a1, a2: A) {.base.} =
  echo("aa")

method say(a: A, b: B) {.base.} =
  echo("ab")

method say(b: B, a: A) =
  echo("ba")

method say(b1, b2: B) =
  echo("bb")

proc saySwap(x: A | B, y: A | B) =
  x.say(y)
  y.say(x)

proc main() =
  let a = A()
  let b = B()
  say(a, b)
  # a.say(b)
  # say(a, A(b))
  # say(A(b), a)
  # say(a=a, b=b)
  # a.saySwap(b)
  # b.saySwap(a)

main()
