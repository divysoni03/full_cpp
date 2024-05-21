#include<iostream>
using namespace std;

class Adder {
public:
    static int add(int a, int b) {
        cout << "add(int, int): ";
        return a+b;
    }

    static int add(int a, int b, int c) {
        cout << "add(int, int, int): ";
        return a+b+c;
    }

    static float add(float a, float b) {
        cout << "add(float, float): ";
        return a+b;
    }

    static double add(double a, double b) {
        cout << "add(double, double): ";
        return a+b;
    }
};

int main() {
    cout << Adder::add(2, 3) << endl;
    cout << Adder::add(2, 3, 5) << endl;
    cout << Adder::add((float)2.2, 3.8f) << endl;
    cout << Adder::add(2.2, 3.8) << endl;

    return 0;
}


/*
Function overloading is a feature in C++ where two or more functions in the same class can have the same name but different parameters.

for example:
    void func();
    void func(int a);
    void func(int a, int b);
    void func(double a, double b);
    void func(double a, int b);
    void func(int a, double b);

It can be done using 2 ways:
    1. By changing the number of arguments
    1. By changing the datatype of arguments

*/

/*
Task:

1. Shape Calculations: Create a class called 'Geometry' that implements methods to calculate the area of various shapes such as circle, rectangle, and triangle. Use method overloading to define separate functions for each shape's area calculation.

2. Math Operations: Develop a class named 'MathOperations' that overloads methods for performing arithmetic operations like addition, subtraction, multiplication, and division for different data types such as integers, floating-point numbers, and complex numbers.

3. Library Management System: Design a class named Library that implements methods for managing library resources such as books, journals, and DVDs. Use method overloading to handle different types of transactions such as borrowing, returning, and renewing items, each with varying parameters based on the type of resource and borrower.

4. Employee Management System: Implement a class named 'Employee' with overloaded methods to handle different types of employee information updates. For example, overload methods for adding new employees with varying sets of parameters such as name, ID, salary, and department.

5. Banking System: Develop a class named BankAccount that handles various banking operations such as deposit, withdrawal, and transfer. Utilize method overloading to cater to different scenarios, such as depositing money with and without a check, withdrawing funds with and without overdraft protection, and transferring money between accounts with and without fees.


Problem Statement: Online Food Ordering System

You are tasked with designing a simplified online food ordering system for a startup restaurant. The restaurant offers a variety of menu items for customers to order. Your goal is to implement a program that allows customers to place orders and then displays the ordered items along with the total amount to be paid.

Requirements:

1. Create a 'MenuItem' class with the following properties and methods:
   - Properties: 'name' (string), 'price' (float)
   - Methods: 'getName()' and 'getPrice()' to retrieve the name and price of the menu item.

2. Create an 'Order' class with the following properties and methods:
   - Properties: 'orderedItems' (string), 'totalAmount' (float)
   - Methods:
     - 'placeOrder(const MenuItem& item)': Adds the ordered menu item to the order. Increments the 'totalAmount' by the menu item's price and appends the item's name to 'orderedItems'.
     - 'placeOrder(const MenuItem& item1, const MenuItem& item2)': Adds two ordered menu items to the order. Increments the 'totalAmount' by the sum of their prices and appends their names to 'orderedItems'.
     - 'displayOrder()': Displays the ordered items and the total amount to be paid.

Instructions:

1. Implement the 'MenuItem' and 'Order' classes according to the given requirements.

2. In the 'main' function:
   - Create at least three different menu items using the 'MenuItem' class.
   - Create an 'Order' object.
   - Place orders using both 'placeOrder' function overloads.
   - Display the ordered items and the total amount using the 'displayOrder' method.

3. Compile and run your program to ensure it produces the correct output.

Example:

Suppose you have the following menu items:
- Pizza: $10.99
- Burger: $5.99
- Pasta: $8.49

Your program's output might look like this:

Ordered items: Pizza, Burger, Pasta, 
Total amount: $25.47


Note: This problem statement is designed to be simplified for demonstration purposes. In a real-world scenario, the system would need more extensive error handling, a larger variety of menu items, user input, and possibly a more complex data structure to manage orders and items.



*/