// 4. Student Information System (Simple):

// -> Problem: Store and display student information.
// -> Classes:
//     -> Student (attributes: name, ID number)
// -> Methods:
//     -> 'Student.getDetails()': Returns a string with the student's name and ID.

#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    string idNumber;

public:
    Student(string n, string id) {
        name = n;
        idNumber = id;
    }

    string getDetails() {
        return "Name: " + name + "\nID: " + idNumber;
    }
};

int main() {
    Student student1("shrey k", "123456");

    cout << "Student Details:\n" << student1.getDetails() << endl;

    return 0;
}
