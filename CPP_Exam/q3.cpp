//  1. Create a Vehicle class with attributes vehicleID, isRented.
//  2. Derive Car from Vehicle with an additional attribute numSeats.
//  3. Implement methods to rentVehicle and returnVehicle in the Vehicle class.
//  4. Create a menu-driven program to demonstrate renting and returning vehicles.
#include<iostream>
using namespace std;

class car;

class Vehicle {
private:
    int vehicleID;
    bool isRented;
public:
    Vehicle(){
        this->vehicleID = 0;
        this->isRented = false;
    }
    Vehicle(int vehicleID){
        this->vehicleID = vehicleID;
        this->isRented = false;
    }

    int getID(){
        return this->vehicleID;
    }

    void rentVehicle(int id){
        this->vehicleID = id;
        this->isRented = true;
        cout << "Vehicle Rented successfully!";
    }
    void returnVehicle(int id){
        this->vehicleID = id;
        this->isRented = false;
        cout << "Vehicle returned successfully!";
    }
};

class Car : public Vehicle {
private:
    int numSeats;
public: 
    Car(int vehicleID,int numSeats) : numSeats(numSeats),Vehicle(vehicleID){}
    int getnumSeats(){
        return this->numSeats;
    }
};

int main(){
    int choice,id;
    Car c1(101,5); 
    do{
        cout << "\n\n1.Rent a Vehicle\n2.Return a Vehicle\n3.Exit\nEnter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter Vehicle ID to rent : ";
                cin >> id;
                c1.rentVehicle(id);
                break;
            case 2: 
                cout << "Enter Vehicle ID to rent : ";
                cin >> id;
                c1.returnVehicle(id);
                break;
            default:
                cout << "Invalid Input !! " << endl;
                break;
        }
    }while(choice != 3);

    return 0;
}