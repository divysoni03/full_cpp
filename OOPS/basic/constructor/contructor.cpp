#include<iostream>
using namespace std;

class FuelPump {
    float petrol;
    float diesel;
    float cng;
    bool air;   //bool - boolean (1->true, 0->false)

    public:
    FuelPump() {
        // petrol = 1000.00;
        diesel = 678.00;
        cng = 1234.00;
        air = false;
        cout << "Default constructor called..." << endl; 
    }
};


int main() {
    FuelPump reliance, jio_BP, indian_oil, SHELL;


    return 0;
}

/*
Constructor: it is a special method which invokes automatically upon creation of the object.
constructors are used to initialize the data members

3 types of constructors: 
1) Default Constructor (Non-parameterized Constructor)
2) Parameterized Constructor (Parameterized Constructor)
3) Copy Constructor

Rules: 
> the name of the constructor should be the same as the class name
> it cannot have return type
> it must be public

> CPP will create a default constructor everytime we create an object.

*/