// 2. WAP to check whether entered no. in between 1-5 , 6-10 or greater than 10.
// Output:-
// Enter any number : 5
// Between 1 – 5


#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    switch(num) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Between 1-5";
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Between 6-10";
            break;
        default:
            if (num > 10)
                cout << "Entered number is greater than 10";
            else
                cout << "Entered info is not appropriate.";
            break;
    }

    return 0;
}
