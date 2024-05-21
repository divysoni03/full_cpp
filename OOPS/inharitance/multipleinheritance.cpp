#include<iostream>
using namespace std;

class Mother {
private:
    string motherName;

public:
    Mother(string name) : motherName(name) {}

    void displayMother() {
        cout << "Mother's Name: " << motherName << endl;
    }
};

class Father {
private:
    string fatherName;

public:
    // Father(string name) : fatherName(name) {}
    Father(string name) {
        fatherName = name;
    }

    void displayFather() {
        cout << "Father's Name: " << fatherName << endl;
    }
};

class Child : public Mother, public Father {
    string childName;
public:
    Child(string mother, string father, string child) : Father(father), Mother(mother), childName(child) {}

    void displayChild() {
        cout << "Child's Name: " << childName << endl;
    }
};


int main() {
    Child obj("Sita", "Ram", "Luv");

    obj.displayChild();
    obj.displayFather();
    obj.displayMother();

    return 0;
}