// > WAP to find power of a given number
// Output :--
// Enter number & Power :2
// 5
// Result of power : 32

#include<iostream>
// #include<math>
using namespace std;

int main(){
    int num,power,sum=1;
    cout << "\nEnter number & power : ";
    cin >> num >> power;
    for(int i=0;i<power;i++){
        sum*=num;
    }
    cout << "\nResult of power : " << sum;
    return 0;
}