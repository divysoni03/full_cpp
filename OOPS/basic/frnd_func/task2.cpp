 // 2. Compare the private data members of two different classes: Define two classes with private data members and a friend function to compare those data members and determine which class has a greater value.

#include<iostream>
using namespace std;

class B;

class A{
    private:
        int privatenum;
    public:
        A(){
            cout << "\nEnter Private data 1 : ";
            cin >> privatenum;
            cout << "private data stored succesfully!";
        }

        friend int compare(A,B);
};

class B{
    private :
        int privatenum;
    public: 
        B(){
            cout << "\nEnter private data 2 : ";
            cin >> privatenum;
            cout << "private data stored succesfully ! ";
        }

        friend int compare(A,B);
};

int compare(A objA, B objB){
    if(objA.privatenum == objB.privatenum){
        cout<< "\nprivate data A and B is equal";
    }
    else if(objA.privatenum < objB.privatenum){
        cout << "\nprivate data B is greater than private data A";
    }
    else{
        cout<< "\nprivate data A is greater than private data B";
    }
    return 0;
}

int main(){
    A objA;
    B objB;

    compare(objA, objB);
    return 0;
}