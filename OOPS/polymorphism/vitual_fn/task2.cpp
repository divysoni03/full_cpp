// 2. Employee Hierarchy: Develop a base class 'Employee' with virtual function 'calculateSalary()'. Derive classes 'FullTimeEmployee' and 'PartTimeEmployee' from 'Employee', each with its own implementation of 'calculateSalary()'. Write a program to calculate and display the total salary of a team consisting of both full-time and part-time employees.

#include<iostream>
using namespace std;

class Employee{
    private:
        int hourSalary;
    public:
        Employee(){
            this->hourSalary = 500;
        }
        virtual void calculateSalary(int hour){
            cout << "salary : " << hour*hourSalary << endl;
        }
};

class FullTimeEmployee : public Employee{
    private:
        int hourSalary;
    public:
        FullTimeEmployee(int hourSalary){
            this->hourSalary = hourSalary;
        }
        void calculateSalary(int hour) override{
            cout << "full time employee salary : " << hourSalary*hour << endl;
        }
};

class PartTimeEmployee : public Employee{
    private:
        int hourSalary;
    public:
        PartTimeEMployee(int hourSalary){
            this->hourSalary = hourSalary;
        }
        void calculateSalary(int hour) override{
            cout << "Part Time Employee Salary : " << hourSalary*hour << endl;
        }
};

int main(){
    Employee* E;
    FullTimeEmployee p1(600),p2(600);
    PartTimeEmployee p3(200),p4(200),p5(250);

    E = &p1;
    E->calculateSalary(8);

    E = &p2;
    E->calculateSalary(9);

    E = &p3;
    E->calculateSalary(10);

    E = &p4;
    E->calculateSalary(2);
    E = &p5;
    E->calculateSalary(3); 
    return 0;
}