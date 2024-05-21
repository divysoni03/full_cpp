// 1. Calculate the sum of two private data members of different classes: Create two classes with private data members and a friend function to calculate the sum of those data members.

#include<iostream>
using namespace std;

class B;

class A{
private:
    int privatenum;
public:
    A(){
        cout << "Enter private data 1 : ";
        cin >> privatenum;
        cout << "Private data 1 stored successfully!" << endl;
    }

    friend int cal_sum(A, B);
};

class B{
private:
    int privatenum;
public:
    B(){
        cout << "\nEnter private data 2 : ";
        cin >> privatenum;
        cout << "Private data 2 stored successfully!" << endl;
    }

    friend int cal_sum(A, B);
};

int cal_sum(A objA, B objB){
    return objA.privatenum + objB.privatenum;
}

int main(){
    A objA;
    B objB;

    // int sum = cal_sum(objA, objB);
    cout << "Sum of private data members: " << cal_sum(objA, objB) << endl;

    return 0;
}
