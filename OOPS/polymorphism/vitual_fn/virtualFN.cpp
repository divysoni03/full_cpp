#include<iostream>
using namespace std;

class A {
    int x;
public:
    A() {
        x = 5;
    }

    virtual void display() {
        cout << "Value of x is " << x << endl;
    }
};

class B : public A {
    int y;
public:
    B(int y) {
        this->y = y;
    }

    void display() override {
        cout << "Value of y is " << y << endl;
    }
};


int main() {
    A *a;
    B b(10), b1(15), b2(20);

    a = &b;
    a->display();

    a = &b1;
    a->display();

    a = &b2;
    a->display();    

    return 0;
}


/*

Virtual FNs:

1. Shape Hierarchy: Create a base class 'Shape' with virtual function 'calculateArea()'. Derive classes 'Circle' and 'Rectangle' from 'Shape', each with its own implementation of 'calculateArea()'. Write a program to demonstrate polymorphism by calling 'calculateArea()' for objects of both derived classes.

2. Employee Hierarchy: Develop a base class 'Employee' with virtual function 'calculateSalary()'. Derive classes 'FullTimeEmployee' and 'PartTimeEmployee' from 'Employee', each with its own implementation of 'calculateSalary()'. Write a program to calculate and display the total salary of a team consisting of both full-time and part-time employees.

3. Animal Hierarchy: Implement a base class 'Animal' with virtual function 'makeSound()'. Derive classes 'Dog' and 'Cat' from 'Animal', each with its own implementation of 'makeSound()'. Write a program to demonstrate polymorphism by making various animals (instances of 'Dog' and 'Cat') produce their respective sounds.

4. Bank Account Hierarchy: Create a base class 'Account' with virtual functions 'deposit()' and 'withdraw()'. Derive classes 'SavingsAccount' and 'CheckingAccount' from 'Account', each with its own implementation of 'deposit()' and 'withdraw()'. Write a program to simulate banking transactions such as depositing and withdrawing money from both savings and checking accounts.

5. Vehicle Hierarchy: Develop a base class 'Vehicle' with virtual function 'start()'. Derive classes 'Car' and 'Bike' from 'Vehicle', each with its own implementation of 'start()'. Write a program to demonstrate polymorphism by starting various vehicles (instances of 'Car' and 'Bike') and observing their behavior.

*/