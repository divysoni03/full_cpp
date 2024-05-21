// 3. Write switch case for 1 for One, 2 for Two till 10. then print out of range
// Output:-
// Enter no between 1 to 5
// 4
// Four

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "\nEnter no between 1 to 5 : ";
    cin >> num;
    switch(num){
        case 1 : 
            cout << "\none";
            break;

        case 2 : 
            cout << "\ntwo";
            break;
        
        case 3 :
            cout << "\nthree";
            break;

        case 4 : 
            cout << "\nfour";
            break;

        case 5 : 
            cout << "\nfive";
            break;
            
        default : {
            cout << "\nInvalid input";
        }
    }
}