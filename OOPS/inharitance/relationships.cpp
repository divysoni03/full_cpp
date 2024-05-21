#include<iostream>
using namespace std;

class A {
private:
    int privateData;
protected:
    int protectedData;
public:
    int publicData;

    A() : privateData(1), protectedData(2), publicData(3) {} // new generation constructor declaration
};

class B : private A {
public:
    void display() {
        // cout << privateData << endl;
        cout << protectedData << endl;
        cout << publicData << endl;
    }
};

class C : public B {
public:
    // void display() {
    //     // cout << privateData << endl;
    //     cout << protectedData << endl;
    //     cout << publicData << endl;
    // }
};

int main() {
    B b;
    // C c;
    // cout << b.publicData;

    // b.display();
    // c.display();

    

    return 0;
}