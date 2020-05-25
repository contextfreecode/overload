using System;

class A {}
class B : A {}

class Overload {
    static void Say(A a1, A a2) {
        Console.WriteLine("aa");
    }

    static void Say(A a, B b) {
        Console.WriteLine("ab");
    }

    static void Say(B b, A a) {
        Console.WriteLine("ba");
    }

    static void Say(B b1, B b2) {
        Console.WriteLine("bb");
    }

    // static void SaySwaps<X, Y>(X x, Y y) {
    //     Say(x, y);
    //     Say(y, x);
    // }

    static void SaySwaps(dynamic x, dynamic y) {
        Say(x, y);
        Say(y, x);
    }

    static void Main(string[] args) {
        var a = new A();
        var b = new B();
        Say(a, b);
        // Say(b as A, a);
        // Say(a: a, b);
        // SaySwaps(a, b);
        // SaySwaps(a, b as A);
    }
}
