#include<iostream>
using namespace std;

int main() {
    cout << "Before exception" << endl;
    
    // try {
    //     int d = 120;
    //     if(d == 0) {
    //         throw invalid_argument("infinite");
    //     } else if(d >= 100) {
    //         throw out_of_range("chacha galat ho raha hai yeh");
    //     }
    //     cout << 12/d << endl;
    // } catch(const out_of_range& e) {
    //     cout << e.what() << endl;
    // } catch(const invalid_argument& e) {
    //     cout << e.what() << endl;
    // } catch(...) {
    //     cout << "Default Exception" << endl;
    // }

    // try {
    //     throw 'e';
    // } 
    // catch(int e) { cout << "int: " << e << endl; }
    // catch(char e) { cout << "char: " << e << endl; }
    // catch(...) { cout << "Default Exception" << endl; }


    cout << "After exception" << endl;

    return 0;
}