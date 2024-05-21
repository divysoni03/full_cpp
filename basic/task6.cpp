// >	Write a C++ program to enter length in centimeters and convert it into meters and kilometers.
// 	Sample Output:
// 	Convert centimeter into meter and kilometer :
// 	--------------------------------------------------
// 	Input the distance in centimeter : 250000
// 	The distance in meter is: 2500
// 	The distance in kilometer is: 2.5 

#include<iostream>
using namespace std;

int main(){
    float distance,meter,kilometer;
    cout << "\nInput the distance in centimeter : ";
    cin >> distance;
    cout << "\nThe distance in meter is : " << distance/100 << "\nThe distance in kilometer is : " << distance/100000;
}