#include<iostream>
using namespace std;

class Calculator {
public:
    void add(int a, int b) {
        cout << a << " + " << b << " = " << a+b << endl;
    }

    void sub(int a, int b) {
        cout << a << " - " << b << " = " << a-b << endl;
    }

    void mul(int a, int b) {
        cout << a << " * " << b << " = " << a*b << endl;
    }

    void div(int a, int b) {
        cout << a << " / " << b << " = " << a/b << endl;
    }
};

class ScientificCalculator : public Calculator {
public:
    int add(int a, int b) { //Overridden Method
        return a+b;
    }

    int sub(int a, int b) {
        return a-b;
    }

    int mul(int a, int b) {
        return a*b;
    }

    float div(int a, int b) {
        return a/b;
    }
};

int main() {
    ScientificCalculator sc;

    cout << sc.add(2, 3);

    return 0;
}

/*
Problem Statement:

Create a C++ program for an e-commerce system. Define a base class 'Product' with a method 'displayInfo()' to showcase product details like name, price, and description. Implement two derived classes, 'PhysicalProduct' and 'DigitalProduct', inheriting from 'Product'.

Override the 'displayInfo()' method in each derived class:

1. In the 'PhysicalProduct' class, override 'displayInfo()' to include specifics like weight, shipping cost, and delivery time.

2. In the 'DigitalProduct' class, override 'displayInfo()' to include information about download links and file sizes.

Instantiate instances of both 'PhysicalProduct' and 'DigitalProduct', highlighting how method overriding allows you to display unique product details while using a shared interface.

*/