#include<iostream>
using namespace std;

class Parent {
protected:
    int property;
    Parent(int prop) : property(prop) {}

    void display() {
        cout << "Parent's Property is " << property << endl;
    }
};

class Child : private Parent {
private:
    int property;
public:
    Child(int c_prop, int p_prop) : Parent(p_prop), property(c_prop+p_prop) {}
    void getProperty() {
        display();
        cout << "Child's Property is " << property << endl;
    }
};


int main() {
    Child c(111, 100000);
    c.getProperty();

    return 0;
}