#include<iostream>
#include<iomanip>   //io- manipulation
using namespace std;

class Parent {
protected:
    string name;
    double propertyValue;
    int gold;   //in kgs

    void displayPropertyValue() {
        cout << name << "'s Property's Worth: " << fixed << setprecision(0) << propertyValue << endl;
    }

    void displayGold() {
        cout << name << " have " << gold << " Kgs Worth of gold." << endl;
    }
public:
    Parent(string name, double propValue) : name(name), propertyValue(propValue), gold(0) {}
    Parent(string name, int g) : name(name), propertyValue(0), gold(g) {}
};

class Son : private Parent {
public:
    Son(string name, double p_value) : Parent(name, p_value) {}

    void inheritProperty() {
        displayPropertyValue();
        cout << "This property will be inherited by Son." << endl;
    }
};

class Daughter : private Parent {
public:
    Daughter(string name, int g) : Parent(name, g) {}

    void inheritGold() {
        displayGold();
        cout << "This gold will be inherited by Daughter." << endl;
    }
};


int main() {
    Son divy("Chetanbhai", 500000000);
    Daughter diya("Chetanbhai", 4000);

    divy.inheritProperty();
    diya.inheritGold();    

    return 0;
}