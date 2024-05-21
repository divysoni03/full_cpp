// > WAP to find sum of digit.
// Output:-
// Enter a Number:15
// Sum of digits of a number:6

#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cout << "\nEnter a Number : ";
    cin >> num;
    while(num>0){
        int rem = num%10;
        sum+=rem;
        num/=10;
    }
    cout << "Sum of digits of a number :" << sum;

    return 0;
}