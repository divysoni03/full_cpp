// > WAP check the no. Armstrong or not
// Output:--
// Enter one no.: 153
// It is armstrong no

#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int num) {
    int numDigits = 0;
    int temp = num;

    while(temp != 0) {
        temp /= 10;
        ++numDigits;
    }

    int sum = 0;
    temp = num;
    while(temp > 0) {
        int digit = temp%10;
        sum += pow(digit, numDigits);
        temp /= 10;
        cout << "output: " << sum << endl;
    }
    return sum == num;
}

int main() {
    cout << isArmstrong(153);        
    return 0;
}