#include<iostream>
using namespace std;

class Test {
private:
    int num;
public:
    Test(int n) : num(n) {}

    int operator++() {
        return (num += 2);
    }

    int operator++(int) {
        return (num += 5);
    }

    void print() {
        cout << "The count is " << num << endl;
    }
};


class StringArithmetic {
private:
    string str;
public:
    StringArithmetic() {}
    StringArithmetic(string s) : str(s) {}

    StringArithmetic operator+(StringArithmetic& obj) {
        return StringArithmetic(str + obj.str);
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    // Test t(5);

    // cout << ++t << endl;
    // t.print();

    // t = t++;
    // t.print();

    StringArithmetic s1("Divy "), s2("Soni"), s3;

    cout << "\nAddition: ";
    // s3 = s1 + s2;
    // s3.display();
    (s1 + s2).display();

    // Task
    // (s1 * 3).display();

    return 0;
}



/*
OPs that can't be overloaded:
    - Scope Operator (::)
    - Sizeof
    - member selector (.)
    - member pointer selector (*)
    - ternary operator (?:)
*/