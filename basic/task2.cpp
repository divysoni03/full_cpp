// >	Write a program in C++ that converts kilometers per hour to miles per hour.
// 	Sample Output:
// 	Convert kilometers per hour to miles per hour :
// 	----------------------------------------------------
// 	Input the distance in kilometer : 25
// 	The 25 Km./hr. means 15.5343 Miles/hr.

#include<iostream>
using namespace std;

int main(){
    float kmh,mph;
    cout << "\nInput the distance in Kilometer : ";
    cin >> kmh;

    mph = kmh*0.621371; 
    cout << "The " << kmh << "Km/hr means " << mph << " Miles/hr.";
    return 0;
}