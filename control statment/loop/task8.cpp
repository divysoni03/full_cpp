// > WAP to print series as 1 + x^1 + x^2 + x^3 +x^4…..x^n
// Output:-
// Enter value of x and n: 2, 2
// Sum is 7.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    int x,n,sum=1;
    cout << "Enter Value of X and N : ";
    cin >> x >> n;
    cout << "1 ";
    for(int i=1;i<=n;i++){
        cout << " " << x << "^" << i << " ";
        sum+= pow(x,i);
    }
    cout << "\nSum of series : " << sum;

    return 0;
}