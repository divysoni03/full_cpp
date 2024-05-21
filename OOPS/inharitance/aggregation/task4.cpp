// 4. Car Rental Management System:
//    Build a car rental management system for a rental agency. Each agency has multiple branches, and each branch manages multiple cars. Develop classes for Agency, Branch, and Car. The Agency class should aggregate Branch objects, and each Branch object should aggregate Car objects. Provide functionalities to add new cars, rent a car from a specific branch, and calculate total revenue earned by an agency.

#include<iostream>
using namespace std;

class Car{
    private:
        string name;
        string modelName;
        float price;
    public:
        Car(){
            this->name = name;
            this->modelName = modelName;
            this->price = price;
        }
        Car(string name,string modelName,float price){
            this->name = name;
            this->modelName = modelName;
            this->price = price;
        }
        void display(){
            cout << "----------CAR----------" << endl;
            cout << "Name : " << name << " ,";
            cout << "Model Name :" << modelName << " ,";
            cout << "Price : " << price << endl; 
        }
};

class Branch : public Car{
    private:
        string name;
        int branch_id;
        int curr_car;
        int MAX_CAR;
        Car* cars;
    public:
        Branch(){
            this->name = "";
            this->branch_id = 0;
            this->curr_car = 0;
            this->MAX_CAR = 1;
            cars = new Car[MAX_CAR];
        }
        Branch(string name, int branch_id,int MAX_CAR){
            this->name = name;
            this->branch_id = branch_id;
            this->curr_car =0;
            this->MAX_CAR = MAX_CAR;
            cars = new Car[this->MAX_CAR];
        }
        void addCar(Car &c){
            if(curr_car > MAX_CAR){
                cout << "adding car capacity have reaches its limit so you cant add more ! " ;
            }
            else{
                cars[curr_car++] = c;
            }
        }
        void display(){
            cout << "BRANCH " << name << "details -> " << endl;
            cout << "Branch Name : " << name << endl;
            cout << "Branch-id : " << branch_id << endl;
        }
        void displayCar(){
            for(int i=0;i<curr_car;i++){
                cars[i].display();
            }
        }
};

class Agency : public Branch{
    private:
        string name;
        string agency_location;
        int agency_id;
        int MAX_BRANCH;
        int curr_branch;
        Branch* branchs;
    public:
        Agency(){
            this->name = "";
            this->agency_location = "";
            this->agency_id = 0;
            this->MAX_BRANCH = 1;
            branchs = new Branch[this->MAX_BRANCH];
        }
        Agency(string name,string agency_location,int agency_id,int MAX_BRANCH){
            this->name = name;
            this->agency_location = agency_location;
            this->agency_id = agency_id;
            this->MAX_BRANCH = MAX_BRANCH;
            branchs = new Branch[this->MAX_BRANCH];
        }
        void addBranch(Branch &b){
            if(curr_branch > MAX_BRANCH){
                cout << "max branch reached now you cant add more ! " ; 
            }
            else{
                branchs[curr_branch++] = b;
            }
        }
        void display(){
            cout << "--------CAR Agency : " << name << "--------" << endl;
            cout << "Agency Name : " << name << endl;
            cout << "Agency Location : " << agency_location << endl;
            cout << "Agency-id : " << agency_id << endl;
        }   
        void displayBranch(){
            for(int i=0;i<curr_branch;i++){
                branchs[i].display();
            }
        }
};

int main(){
    Agency agency1("Divy Car Store","Gandhinagar",101,1);

    Branch b1("Sports car",1,2);

    Car c1("alto","800",3000.99);
    Car c2("swift","i20",2000.59);

    agency1.addBranch(b1);
    b1.addCar(c1);
    b1.addCar(c2);

    agency1.displayBranch();
    b1.displayCar();
    
    return 0;
}