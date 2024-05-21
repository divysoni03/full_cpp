// 4. Write switch case program to print days of the weeks.
// Output:- 
// Enter the day: 5
// Thursday

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "\nEnter a number : ";
    cin >> num;
    switch(num){
        case 1 : 
            cout << "\nMonday";
            break;
        case 2 : 
            cout << "\nTuesday";
            break;
        case 3 :
            cout << "\nWednesday";
            break;
        case 4 :   
            cout << "\nThursday";
            break;
        case 5 : 
            cout << "\nFriday";
            break;
        case 6 : 
            cout << "\nSaturday";
            break;  
        case 7 : 
            cout << "\nSunday";
            break;
        default : 
            cout << "\nInvalid Input !! ";
            break;

    }
    return 0;
}