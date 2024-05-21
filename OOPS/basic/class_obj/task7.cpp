// 7. Car Rental System (Simple):

// -> Problem: Check the availability of a car for a specific date.
// -> Classes:
//     -> Car (attributes: model, availability status)
// -> Methods:
//     -> 'Car.isAvailable(date)': Checks if the car is available for the provided date (returns True/False).

#include<iostream>
using namespace std;

class Car{
    private:
        string name;
        bool status;
    public:
        Car(string name,bool status){
            this->name = name;
            this->status = status;
        }

        void displaystatus(){
            cout << "\nModel Name : " << name << "\nStatus : " << status << endl; 
        }

};

int main(){
    Car alto("alto800",0);
    alto.displaystatus();
    return 0;
}