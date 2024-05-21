// > WAP to print Fibonacci Series
// Output:--
// 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,

#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,c=1;
    cout << a << " ," << b << " ,";
    for(int i=0;i<10-2;i++){
        c=a+b;
        cout << c << " ,";
        a=b;
        b=c;
    }
    return 0;
}