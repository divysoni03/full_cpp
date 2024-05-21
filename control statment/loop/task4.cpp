// > WAP to print whether no. is Palindrome or not
// Output :--
// Enter a no.: 1221
// pelindrome no

#include<iostream>
using namespace std;

int reverse(int num){
    int result=0;
    while(num>0){
        int rem = num%10;
        result=(result*10)+rem;
        num/=10;
    }
    return result;
}
int main(){
    int num;
    cout << "\nEnter a number : ";
    cin >> num;
    if(num == reverse(num)) cout << "\nYour Entered number is palidrom.";
    else cout << "\nYour Entered number is not palidrom.";

    return 0;
}