// >	Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
// 	Sample Output:
// 	Convert temperature in Kelvin to Fahrenheit :
// 	---------------------------------------------------
// 	Input the temperature in Kelvin : 300
// 	The temperature in Kelvin : 300
// 	The temperature in Fahrenheit : 80.33

#include<iostream>
using namespace std;

int main(){
    float kelvin,f;
    cout << "\nInput the temperature in Kelvin : ";
    cin >> kelvin;
    f = ((kelvin -273.15)*1.8)+32;
    cout << "\nThe temperature in kelvin : " << kelvin << "\nThe temperature in Fahrenheit : " << f;
    return 0;
}