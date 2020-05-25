#include <iostream>

struct B;

struct A {
  virtual void say(const A& a) {
    std::cout << "aa" << std::endl;
  }
  virtual void say(const B& b) {
    std::cout << "ab" << std::endl;
  }
};

struct B: A {
  virtual void say(const A& a) override {
    std::cout << "ba" << std::endl;
  }
  virtual void say(const B& b) override {
    std::cout << "bb" << std::endl;
  }
};

auto main() -> int {
  auto b = B {};
  A& a = b;
  a.say(a);
  a.say(b);
}
