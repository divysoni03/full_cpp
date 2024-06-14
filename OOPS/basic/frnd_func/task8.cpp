// 8. Swap private data members of two different classes: Define two classes with private data members and a friend function to swap those data members between instances of the classes.

#include <iostream>
using namespace std;

void swap();
class B;

class A {
public:
    int a;
    A(int a):a(a){}
    friend void swap(A , B);
};

class B {
public:
    int b;
    B(int b):b(b){}
    friend void swap(A ,B);
};

void swap(A& num1, B& num2) {
    int temp = num1.a;
    num1.a = num2.b;
    num2.b = temp;
}

int main() {
    A a1(5);
    B b1(10);
    cout << a1.a << endl << b1.b;
    swap(a1.a , b1.b);
    cout << endl << a1.a << endl << b1.b;
    return 0;
}