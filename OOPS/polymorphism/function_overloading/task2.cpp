// 2. Math Operations: Develop a class named 'MathOperations' that overloads methods for performing arithmetic operations like addition, subtraction, multiplication, and division for different data types such as integers, floating-point numbers, and complex numbers.

#include<iostream>
using namespace std;

class Mathoperation{
public :    
    int addition(int a, int b){
        return a+b;
    }
    float multiplication(float a ,float b){
        return a*b;
    }
    float devide(float a,float b){
        return a/b;
    }
    int substraction(int a,int b){
        return a-b;
    }
};

int main(){
    cout << "Addition : " << Mathoperation::addition(34,23) << endl;
    cout << "Multiplication : " << Mathoperation::multiplication(32.3,56.4) << endl;
    cout << "Divide : " << Mathoperation::devide(40,2) << endl;
    cout << "Substraction : " << Mathoperation::substraction(34,43) << endl;
    return 0;
}