// 8. Employee Payroll System (Simple):

// -> Problem: Calculate the total pay for an employee based on a fixed hourly rate and worked hours.
// -> Classes:
//     -> Employee (attributes: name, hourly rate)
// -> Methods:
//     -> 'Employee.calculatePay(hours)': Calculates the total pay by multiplying hourly rate with worked hours.

#include<iostream>
using namespace std;

class Employee{
    private:
        string name;
        int H_rate;
    public:
        Employee(string name,int H_rate){
            this->name = name;
            this->H_rate = H_rate;
        }
        void calculatePay(int hours){
            cout << "\nName of Employee : " << name << "\nFinal Salary : " << hours*H_rate << endl; 
        }
};

int main(){
    Employee divy("divysoni",5000);
    divy.calculatePay(24);

    return 0;
}