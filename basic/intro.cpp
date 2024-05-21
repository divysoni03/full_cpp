/*
CPP/C++: C PLUS PLUS
C++ is a general purpose programming language and widely used nowadays for competitive programming and in dsa due to it's lower compile time and runtime

> It is a semi Object Oriented Programming Language.
> header file - iostream (stream is a continuous flow of data)

*/

#include<iostream>  //header file - input output stream
using namespace std;    //namespace created by c++

int main() {
    // char name[20];
    // string name1;
    // cout << "Hello World!" << endl << "This is new line";

    // cout << "\nEnter your name: ";
    // cin >> name;
    // cin.getline(name, 20);   //char array
    // getline(cin, name1);    //string datatype

    // cout << "\nYour name is " << name;

    int a, b, c;
    cout << endl << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    cout << "\na = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}

/*
iostream -> input output stream (istream + ostream)
istream -> input stream (cin)
ostream -> output stream (cout)

cout -> console output stream -> used to print the output
> cout uses insertion operator (<<) to print the output

cin -> console input stream -> used to take input from the user
> cin uses extraction operator (>>) to take input from the user

endl -> end line -> prints a new line

Difference between void main() and int main():

> void main() is not a standard way to write the main function
> int main() is a standard way to write the main function

> void main() is not returning any value
> int main() is returning 0 if program is successfully executed

> void main() is not taking any parameter
> int main() is taking two parameters (int argc, char* argv[])


stream -> flow of data

in cpp we use stream because the data is not directly printed on the console or taken from the console (it is taken from the buffer).
> buffer is a temporary storage area in the memory
> stream is used to transfer the data from the buffer to the console and vice versa

Advantages of using stream:
> we can use the same code to take input from the file and print the output on the file
> we can use the same code to take input from the console and print the output on the console

*/