// 1. Shape Hierarchy: Create a base class 'Shape' with virtual function 'calculateArea()'. Derive classes 'Circle' and 'Rectangle' from 'Shape', each with its own implementation of 'calculateArea()'. Write a program to demonstrate polymorphism by calling 'calculateArea()' for objects of both derived classes.

#include<iostream>
using namespace std;

class Shape{
private:

public:
    virtual void calculateArea(){
        cout << "area : " ;
    }
};

class Circle : public Shape{
    private:
        float radius;
    public:
        Circle(float radius){
            this->radius = radius;
        }
        void calculateArea() override {
            cout << "Area of circle : " << (3.14*radius*radius) << endl;
        }
};

class Rectangle : public Shape{
    private:
        float length;
        float width;
    public:
        Rectangle(float length,float width){
            this->length = length;
            this->width = width;
        }
        void calculateArea() override { 
            cout << "Area of Rectangle : " << length*width << endl;
        }
};

int main(){

    return 0;
}