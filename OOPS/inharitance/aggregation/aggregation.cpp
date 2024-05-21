// 1. School Management System:
//    Develop a school management system where each school has multiple classes, and each class has multiple students. Implement classes for School, Class, and Student. The School class should aggregate Class objects, and each Class object should aggregate Student objects. Provide functionalities to add new classes and students, display all students in a particular class, and calculate average scores of students in a class.


#include<iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    Student() {}
    Student(int rollNo, string name, float marks) : rollNo(rollNo), name(name), marks(marks) {}

    void display() {
        cout << "Roll No: " << rollNo << ", ";
        cout << "Name: " << name << ", ";
        cout << "Marks: " << marks << endl;
    }
};

class School {
    int id;
    string name;
    Student* students;      //Array of Student Pointer
    int max_capacity;
    int current_students;
public:
    School() {
        this->id = 0;
        this->name = "";
        this->max_capacity = 1;
        students = new Student[max_capacity];
        this->current_students = 0;
    }

    School(int id, string name, int max_capacity) {
        this->id = id;
        this->name = name;
        this->max_capacity = max_capacity;
        students = new Student[this->max_capacity];
        this->current_students = 0;
    }

    ~School() {
        delete[] students;
    }

    void addStudent(Student& s) {
        if(current_students < max_capacity) {
            students[current_students++] = s;
        } else {
            cout << "School has reached its Max Limit of Taking Admissions" << endl;
        }
    }


    void displayStudents() {
        cout << "Students of " << name << ": " << endl;
        for (int i = 0; i < current_students; i++) {
            students[i].display();
        }
    }
};


int main() {
    School school(123, "Shree Hari International Public School", 3);

    Student s1(1, "Dhruv", 99);
    Student s2(2, "Adityarajsinh", 70);
    Student s3(3, "Pratham", 33);
    Student s4(4, "Nand", 78);

    school.addStudent(s1);
    school.addStudent(s2);
    school.addStudent(s3);
    school.addStudent(s4);

    school.displayStudents();

    return 0;
}
