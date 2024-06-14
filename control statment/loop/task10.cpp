// > WAP to print series 1 + x! ………… n!
// Output :-
// Sum of all factorials is 153

#include<iostream>
using namespace std;

int factorial(int num){
    // int sum=1;
    // if(num == 0 || num==1){
    //     return 1;
    // }
    // else{
    //     while(num>0){
    //         sum*=num;
    //         num--;
    //     }    
    // }
    if(num == 0 || num == 1) return 1;
    else return num * factorial(num-1);
}

int main(){
    int range,sum=0;
    cout << "\nEnter a number :";
    cin >> range;
    for(int i=1;i<=range;i++){
        cout << factorial(i) << " "; 
        sum+=factorial(i);
    }
    cout << "\nSum : " << sum;

    return 0;
}