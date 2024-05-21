// > WAP to print series as 1-3+5-7+9……n
// Output:- 
// Enter one value : 7
// Sum of series is 4

#include<iostream>
using namespace std;

int main(){
    int num,i,value=0,sum=0,plus=1;
    cout << "\nEnter a number : ";
    cin >> num;
    for(i=1;i<num;i++){
        if((i%2)!=0){
            value = plus*i;
            cout << value;
            sum+=value;
            if(plus == 1){
                plus+=-2;
            }
            else{
                plus+=2;
            }
        }
    }
    cout << "\nsum : " << sum;
}