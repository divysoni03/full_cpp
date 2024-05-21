// > WAP to find sum of odd digit of entered digit.
// Output:-
// Enter a Number:1567
// Sum of Odd digits of a number:13

#include<iostream>
using namespace std;

int main(){
    int num,sumofODD=0;
    cout << "\nEnter a Number : ";
    cin >> num;
    while(num>0){
        int rem = num%10; 
        if((rem%2)!=0){
            sumofODD+=rem;
        }
        num/=10;
    }
    cout << "Sum of ODD digits of a number :" << sumofODD;
    
    return 0;
}