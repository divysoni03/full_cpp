/*
Pure Virtual Function will be used to make a class Abstract Class.

in order to do that we need to declare a function as pure virtual function.

Syntax:
virtual void fun() = 0;

Sure, let's consider a real-world example related to the concept of an abstract class.

Imagine you are building a computer game, and in this game, you have different types of vehicles: cars, motorcycles, and bicycles. Each of these vehicles shares some common characteristics, such as a brand, a model, and a maximum speed. However, each type of vehicle also has unique features and behaviors specific to it.
In this scenario, you can use an abstract class called "Vehicle" as a blueprint for all the different types of vehicles in your game.

Whichever class will have the pure virtual function, that class will become the abstract class. and whichever class will inherit the abstract class, that class will become the concrete class. and the concrete class must have to override the pure virtual function of the abstract class.
*/

#include<iostream>
using namespace std;

//Abstract Class
class Vehicle {
private:
    string brand;
    string model;
    int maxSpeed;
public:
    Vehicle(string b, string m, int speed) : brand(b), model(m), maxSpeed(speed) {}

    virtual void startEngine() = 0;
    virtual void stopEngine() = 0;

    void display() {
        cout << "Brand: " << brand << ", Model: " << model << ", Max Speed: " << maxSpeed << endl;
    }
};

//Concrete Class
class Car : public Vehicle {
public:
    Car(string brand, string model, int maxSpeed) : Vehicle(brand, model, maxSpeed) {}

    void startEngine() override {
        cout << "Car's engine started!" << endl;
    }

    void stopEngine() override {
        cout << "Car's engine stopped!" << endl;
    }
};

class MotorCycle : public Vehicle {
public:
    MotorCycle(string brand, string model, int maxSpeed) : Vehicle(brand, model, maxSpeed) {}

    void startEngine() override {
        cout << "MotorCycle's engine started!" << endl;
    }

    void stopEngine() override {
        cout << "MotorCycle's engine stopped!" << endl;
    }
};

class Bicycle : public Vehicle {
public:
    Bicycle(string brand, string model, int maxSpeed) : Vehicle(brand, model, maxSpeed) {}

    void startEngine() override {
        cout << "Bicycles does not have any engines!" << endl;
    }

    void stopEngine() override {
        cout << "Bicycles does not have any engines!" << endl;
    }
};

int main() {
    Car c("Tata", "Harrier", 240);
    MotorCycle bike("Royal Enfield", "Himalayan", 180);
    Bicycle cycle("Herculus", "Captain Shakti", 20);

    c.startEngine();
    c.stopEngine();
    c.display();
    
    bike.startEngine();
    bike.stopEngine();
    bike.display();

    cycle.startEngine();
    cycle.stopEngine();
    cycle.display();

    return 0;
}