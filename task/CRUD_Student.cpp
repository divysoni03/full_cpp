#include<iostream>
using namespace std;

class Student {
public:
    int id;
    string name;
    int age;

    Student() :  id(0), name(""), age(0) {}

    Student(int id, string name, int age) : id(id), name(name), age(age) {}

    void display() {
        cout << "Id: " << id << ", Name: " << name << ", Age: " << age << endl;
    }
};

class StudentManager {
private:
    Student* students;
    int capacity;
    int count;
public:
    StudentManager(int capacity) : capacity(capacity), count(0) {
        students = new Student[this->capacity];
    }

    ~StudentManager() {
        delete[] students;
    }

    void createStudent(int id, string name, int age) {
        if(count >= capacity) {
            cout << "Error: Capacity full. Cannot add more students. " << endl;
            return;
        }

        students[count++] = Student(id, name, age);
        cout << "Student added successfully." << endl;
    }

    void readStudent() {
        if(count == 0) {
            cout << "No Students to display." << endl;
            return;
        }

        for (int i = 0; i < count; i++) {
            students[i].display();
        }
    }

    void updateStudent(int id, string name, int age) {
        for (int i = 0; i < count; i++) {
            if(students[i].id == id) {
                students[i].name = name;
                students[i].age = age;
                cout << "Student updated successfully." << endl;
                return;
            }
        }
        cout << "Error: Student with ID " << id << " not found" << endl;
    }

    void deleteStudent(int id) {
        for (int i = 0; i < count; i++) {
            if(students[i].id == id) {
                for (int j = i; j < count - 1; j++) {
                    students[j] = students[j+1];
                }
                count--;
                cout << "Student deleted successfully." << endl;
                return;
            }
        }
        cout << "Error: Stduent with ID " << id << " not found." << endl;
    }
};

int main() {
    StudentManager manager(5);

    manager.createStudent(1, "Alice", 20);
    manager.createStudent(2, "Bob", 22);
    manager.createStudent(3, "Charlie", 23);
    manager.createStudent(4, "Vedant", 18);

    cout << "Current Students: " << endl;
    manager.readStudent();

    cout << "\nUpdating Bob's age to 25: " << endl;
    manager.updateStudent(2, "Bob", 25);

    cout << "\nDeleting Charlie: " << endl;
    manager.deleteStudent(3);

    cout << "\nCurrent Students: " << endl;
    manager.readStudent();

    manager.createStudent(3, "Pratham", 19);

    cout << "\nCurrent Students: " << endl;
    manager.readStudent();

    return 0;
}

/*
-> Problem Statement 2: Library Book Inventory System
You need to develop a Library Book Inventory System to manage the books available in a library. The system should support the following operations:

1. Create: Add a new book with the attributes ISBN, title, and author.
2. Read: List all the books available in the library.
3. Update: Update the details (title and author) of an existing book based on its ISBN.
4. Delete: Remove a book from the inventory based on its ISBN.

USE SWITCH CASE WHERE IT IS POSSIBLE
*/