// >	Write a C++ program to convert temperature in Fahrenheit to Celsius.
// 	Sample Output:
// 	Convert temperature in Fahrenheit to Celsius :
// 	---------------------------------------------------
// 	Input the temperature in Fahrenheit : 95
// 	The temperature in Fahrenheit : 95
// 	The temperature in Celsius : 35

#include<iostream>
using namespace std;

int main(){
    int f=0,c=0;

    cout << "\nInput the temperature in Fahrenheit : ";
    cin >> f;
    c = (f-32)*5/9;
    cout << "\nThe temperature in Fahrenheit : " << f << "\nThe temperature in Celsius : " << c;

    return 0;
} 