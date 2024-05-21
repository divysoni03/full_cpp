// >	Write a C++ program that accepts the radius of a circle from the user and computes the area and circumference.
// 	Sample Output:
// 	Find the area and circumference of any circle :
// 	----------------------------------------------------
// 	Input the radius(1/2 of diameter) of a circle : 5
// 	The area of the circle is : 78.5397
// 	The circumference of the circle is : 31.4159

#include<iostream>
using namespace std;

int main(){
    float radius,area,circumference;
    cout << "\nInput the radius(1/2 of diameter)of a circle :";
    cin >> radius;
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    cout << "\nThe area of the circle is : " << area << "\nThe circumference of the circle is : " << circumference;
    
    return 0;
}