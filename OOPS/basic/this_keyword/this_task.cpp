// 1. Create a class 'Employee' to represent an employee in a company. Each employee has a unique ID and salary. Implement a member function 'compareSalary(Employee* other)' that takes another employee object as a parameter and uses the 'this' pointer to compare the salary of the current employee with the other employee.

#include<iostream>
using namespace std;

class Employee {
    int emp_uid;
    float emp_salary;

public:
    // Employee(int emp_uid, float emp_salary) {
    //     this->emp_uid = emp_uid;
    //     this->emp_salary = emp_salary;
    // }

    // Employee(int emp_uid, float emp_salary) : emp_uid(emp_uid), emp_salary(emp_salary) {}
    Employee(int id, float salary) : emp_uid(id), emp_salary(salary) {}

    void compareSalary(Employee* emp) {
        float diff = this->emp_salary - emp->emp_salary;
        if(diff == 0) {
            cout << "same salary";
        } else if(diff > 0) {
            cout << "more salary";
        } else {
            cout << "less salary";
        }
    }
};

int main() {
    Employee e(7878, 50000);
    Employee e1(5686, 50000);

    e.compareSalary(&e1);


    return 0;
}