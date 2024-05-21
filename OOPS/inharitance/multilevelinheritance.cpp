#include<iostream>
using namespace std;

class Vehicle {
private:
    string brand;
public:
    Vehicle(string b) : brand(b) {}

    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
private:
    int seats;
public:
    Car(string b, int s) : Vehicle(b), seats(s) {}

    void displaySeats() {
        cout << "Number of seats: " << seats << endl;
    }
};

class SUV : public Car {
private:
    bool offRoadCapability;
public:
    SUV(string b, int s, bool offRoad) : Car(b, s), offRoadCapability(offRoad) {}

    void displayOffRoadCapability() {
        cout << "Off-Road Capability: " << (offRoadCapability ? "Yes" : "No") << endl;
    }
};

int main() {
    SUV suv("Toyota Land Cruiser", 5, true);
    suv.displayBrand();
    suv.displaySeats();
    suv.displayOffRoadCapability();

    return 0;
}