// 2. Employee Database:
// You are building an application to manage employee data for a company. Implement an "Employee" class with data members like name, employee ID, designation, and salary. The default constructor will initialize the employee with default values like "Unknown" for name and designation, ID set to zero, and salary set to the minimum wage. Create an object using the default constructor to represent a new employee and display their details.

#include<iostream>
using namespace std;

class Employee{
    private:
        string name;
        int Employee_id;
        string designation;
        int salary;
    public:
        Employee(){
            name = "unknown";
            Employee_id = 0;
            designation = "unknown";
            salary = 0;
            cout << "\nDefault constructor called !! ";
        }
        void display(){
            cout << "\nName : " << name << "\nEmployee id : " << Employee_id << "\ndesignation : " << designation << "\nsalary : " << salary << endl;
        }
};

int main(){
    Employee divy;
    divy.display();
    return 0;
}