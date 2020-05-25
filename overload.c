#include <stdio.h>

typedef struct A {int _;} A;
typedef struct B {int _;} B;

void say_aa(A a1, A a2) {
  printf("aa\n");
}

void say_ab(A a, B b) {
  printf("ab\n");
}

void say_ba(B b, A a) {
  printf("ba\n");
}

void say_bb(B b1, B b2) {
  printf("bb\n");
}

#define say(x, y) _Generic((x), \
  A: _Generic((y), \
    A: say_aa, \
    B: say_ab \
  ), \
  B: _Generic((y), \
    A: say_ba, \
    B: say_bb \
  ) \
)(x, y)

#define say_swaps(x, y) ( \
  say(x, y), \
  say(y, x) \
)

int main() {
  A a;
  B b;
  printf("%s\n", _Generic(a, A: "a", B: "b"));
  // say(a, b);
  // say_swaps(a, b);
}
