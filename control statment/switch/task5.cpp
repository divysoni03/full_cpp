// 5. Write switch case program to print months of the years.
// Output:- 
// Enter the number between 1 to 12: 2
// February

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "\nEnter a number between 1 - 12 : ";
    cin >> num ;

    switch(num){
        case 1 :
            cout << "\nJanuary";
            break;
        case 2 : 
            cout << "\nFebuary";
            break;
        case 3 : 
            cout << "\nMarch";
            break;
        case 4 : 
            cout << "\nApril";
            break;
        case 5 : 
            cout << "\nmay";
            break;
        case 6 :
            cout << "\nJune";
            break;
        case 7 : 
            cout << "\nJuly";
            break;
        case 8 : 
            cout << "\nAugest";
            break;
        case 9 :
            cout << "\nSeptember";
            break;
        case 10 : 
            cout << "\nOctomber";
            break;
        case 11 : 
            cout << "\nNovember";
            break;
        case 12 : 
            cout << "\nDecember";
            break;
        default : 
            cout << "\nInvalid Input";
            break;
    }

    return 0;
}
