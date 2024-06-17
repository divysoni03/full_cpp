// 1. Create an Employee class with attributes employeeID, name, designation.
//  2. Implement methods to addEmployee, saveToFile (writes employee details to a file), and readFromFile
//  (reads details from the file).
//  3. Create a menu-driven program to demonstrate adding employees and saving to/reading from a file.
#include<iostream>
#include<fstream>
using namespace std;

class Employee {
public:
    int employeeID;
    string name,designation;
public: 
    Employee(){
        this->employeeID = 0;
        this->name = "";
        this->designation = ""; 
    }
    Employee(int employeeID,string name,string designation){
        this->employeeID = employeeID;
        this->name = name;
        this->designation = designation;
    }
};

class Employees : public Employee{
    private:
        int max_employee;
        int curr_employee;
        Employee* employees;
    public:
        Employees() {
            this->max_employee = 10;
            this->curr_employee =0;
            employees = new Employee[max_employee];
        }

        void addEmployee(){
            if(curr_employee > max_employee){ cout << "no job left !";}
            else {
                int employeeid;
                string name,designation;    
                cout << "Enter Empolyee ID:";
                cin >> employeeid;
                cout << "Enter Name: ";
                getline(cin,name);
                cout << "Enter designation: ";
                getline(cin,designation);
                employees[curr_employee].employeeID = employeeid;
                employees[curr_employee].name = name;
                employees[curr_employee].designation = designation; 
            }
        }

        void saveToFile(){
            ofstream file("data.txt");
            if(!file.is_open()){
                cout <<"coudn't open the file !" << endl;
            }

            for(int i=0;i<curr_employee;i++){
                file << employees[i].employeeID << ",";
                file << employees[i].name << ",";
                file << employees[i].designation << endl;
            }

            file.close();
        }
        void readToFile(){
            ifstream file("data.txt");

            if(!file.is_open()){
                cout <<"coudn't open the file !" << endl;
            }
            string line;
            while(getline(file,line)){
                cout << line << endl;
            }
            file.close();
        }
};

int main(){
    int choice;
    Employees royal;

    do{
        cout << "\n1.Add Employee\n2.Save to File\n3.Read from File\n4.Exit\nEnter your Choice: ";
        cin >> choice;

        if(choice == 4){cout << "Exiting the program.."; exit(0);}
        switch(choice){
            case 1:
                royal.addEmployee();
                break;
            case 2:
                royal.saveToFile();
                break;
            case 3:
                royal.readToFile();
                break;
            default:
                cout << "Invalid !!";
        }
    }while(choice != 4);
    return 0;
}