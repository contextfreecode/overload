// Include unused members to they aren't structurally similar.
class A {a = 0}
class B {b = 0}

function say(a: A, b: B): void;
function say(b: B, a: A): void;
function say(x: A | B, y: A | B) {
  if (x instanceof A && y instanceof B) {
    console.log("ab");
  } else if (x instanceof B && y instanceof A) {
    console.log("ba");
  } else {
    throw new Error("Fail!");
  }
}

function saySwaps(a: A, b: B): void;
function saySwaps(b: B, a: A): void;
function saySwaps(x: A | B, y: A | B) {
  // This is a lie, but it works.
  say(x as A, y as B);
  say(y as B, x as A);
}

function main() {
  let a = new A();
  let b = new B();
  say(a, b);
  // saySwaps(a, b);
  // saySwaps(b, a);
}

main()
