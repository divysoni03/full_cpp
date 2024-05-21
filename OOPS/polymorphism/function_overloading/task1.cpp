// 1. Shape Calculations: Create a class called 'Geometry' that implements methods to calculate the area of various shapes such as circle, rectangle, and triangle. Use method overloading to define separate functions for each shape's area calculation.

#include<iostream>
using namespace std;

class Geometry{
public:
    float circle(float radius){
        return (3.14*radius*radius);
    }
    float rectangle(float length, float width){
        return (length*width);
    }
    float triangle(float base, float height){
        return (0.5*base*height);
    }

};


int main(){
    // Geometry area1;
    // cout << "Area : " << area1.circle(45.4) << endl;
    // cout << "Area : " << area1.rectangle(34, 32) << endl;
    // cout << "Area : " << area1.triangle(33,15) << endl;

    //we can use this too 
    cout << "Area : " << Geometry::circle(45.4) << endl;
    cout << "Area : " << Geometry::rectangle(34, 32) << endl;
    cout << "Area : " << Geometry::triangle(33,15) << endl;
    
    return 0;
}