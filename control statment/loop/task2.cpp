// > WAP to find factorial of a given number
// Output:--
// Enter the no:5
// The factorial is 120

#include<iostream>
using namespace std;

int main(){
    int num,result=1;
    cout << "\nEnter the number : ";
    cin >> num;
    while(num>0){result*=num;num--;}
    cout << "\nThe Factorial is " << result;
    return 0;
}