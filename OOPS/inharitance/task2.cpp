// 2. Vehicle Rental System
//    - Classes: Vehicle (Base), Car (Child), Bike (Child)
//    - Attributes: brand, model, rentalPrice
//    - Methods: calculateRentalCost(), displayAvailability()

#include<iostream>
using namespace std;

class Vehicle{
    private:
        string name,company_name;
        double price;
    public: 
        Vehicle(string name,string company_name , double price){
            this->name = name;
            this->company_name = company_name;
            this->price = price;
        }
        void displayDetails(){
            cout << "\nName : " << name << endl;
            cout << "Company Name : " << company_name << endl;
            cout << "Price : " << price << endl;
        }
};

class Car : private Vehicle{
    public:
        Car(string name,string company_name,double price) : Vehicle(name,company_name,price){}
        void display(){
            cout << "\nDisplaying car details -------> ";
            displayDetails();
        }
};  

class Bike : private Vehicle{
    public:
        Bike(string name,string company_name, double price) : Vehicle(name,company_name,price){}
        void display(){
            cout << "\ndisplaying bike details -------> ";
            displayDetails();
        }
};
    
int main(){
    Car c1("alto800", "maruti suzuki" , 200000);
    Bike b1("splender", "honda" , 120000);

    c1.display();
    b1.display();
    return 0;
}