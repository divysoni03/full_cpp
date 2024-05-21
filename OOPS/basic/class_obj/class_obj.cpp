/*
in this file learn about class object attribute/class variable/ data members and methods
*/
#include<iostream>
using namespace std;

class Dog {
    public:
    //Attributes, class variable, data members
    string name;
    string breed;
    string color;
    int age;

    //Methods
    void bark() {
        cout << name << " is Barking..." << endl;
    }

    void run() {
        cout << name << " is running..." << endl;
    }

    void sleep() {
        cout << name << " is sleeping..." << endl;
    }

    void eat() {
        cout << name << " is eating..." << endl;
    }

    void intro() {
        cout << "Hello, my name is " << name << ", I'm a " << breed << " of " << color << " color. and I'm " << age << " years old." << endl;
    }
};

int main() {
    Dog d; //object 

    // below changing or rewriting data members
    d.name = "Tina";
    d.breed = "Chihuahua";
    d.age = 6;
    d.color = "Brown";
    
    //calling methods
    d.intro();
    d.bark();
    d.eat();
    d.run();
    d.eat();
    d.sleep();
    d.eat();
    d.sleep();

    return 0;
}