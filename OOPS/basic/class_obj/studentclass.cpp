// #include<iostream>
// using namespace std;

// class Student{
//     public: //acesses modifier
//         int id;
//         string name;
//         float marks;


//     void scan(){
//         cout << "Enter id : ";
//         cin >> id;
//         cout << "Enter Name: ";

//         cin.ignore();  //to clear buffer memory so we can input name

//         getline(cin , name);   
//         cout << "Enter Marks:";
//         cin >> marks;
//     }


//     void display(){
//         cout << "Displaying student details:";
//         cout << "\nid : " << id << "\nName : " << name << "\nMarks : " << marks;
//     }

// };


// int main(){
//     Student s;
//     s.scan();
//     s.display();
    
//     return 0;
// }

#include<iostream>
using namespace std;

class Student {
        int id;
        string name;
        float marks;
    
    public:
    void scan() {
        cout << "Enter id: ";
        cin >> id;

        cout << "Enter name: ";
        // cin >> name;
        cin.ignore();   //clear buffer memory
        getline(cin, name);

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student;

    // student.id = 23;
    // student.name = "Vedant Uchiha";
    // student.marks = 78.34876;

    student.scan();

    cout << "Displaying Stduent Details: " << endl;
    // cout << "Id: " << student.id << endl;
    // cout << "Name: " << student.name << endl;
    // cout << "Marks: " << setprecision(4) << fixed << student.marks << endl;

    student.display();

    return 0;
}

/*
Tasks:

1. Library Management System (Simple):

-> Problem: Design a system to track books borrowed by a patron.
-> Classes:
    -> Book (attributes: title, author, ISBN)
    -> Patron (attributes: name, library ID)
    -> Checkout (attributes: book object, patron object, checkout date)
-> Methods:
    -> 'Book.borrowedBy(patron)': Marks the book as borrowed by the patron (updates a flag or creates a checkout object).
    -> 'Patron.borrows(book)': Records the borrowing of the book for the patron.

2. Online Shopping System (Simple):

-> Problem: Simulate adding a product to a cart and calculating its total price.
-> Classes:
    -> Product (attributes: name, price)
    -> Cart (attributes: list of product objects)
-> Methods:
    -> 'Cart.addProduct(product)': Adds the product to the cart's list.
    -> 'Cart.getTotalPrice()': Calculates the sum of all product prices in the cart.

3. Bank Account Management (Simple):

-> Problem: Implement a basic savings account with deposit functionality.
-> Classes:
    -> SavingsAccount (attributes: account number, balance)
-> Methods:
    -> 'SavingsAccount.deposit(amount)': Adds the amount to the account balance.

4. Student Information System (Simple):

-> Problem: Store and display student information.
-> Classes:
    -> Student (attributes: name, ID number)
-> Methods:
    -> 'Student.getDetails()': Returns a string with the student's name and ID.

5. Hospital Management System (Simple):

-> Problem: Schedule an appointment for a patient with a doctor.
-> Classes:
    -> Patient (attributes: name)
    -> Doctor (attributes: name)
    -> Appointment (attributes: patient object, doctor object, date)
-> Methods:
    -> 'Appointment.schedule(patient, doctor, date)': Creates an appointment object with the provided details.

6. Inventory Management System (Simple):

-> Problem: Track the quantity of a product in stock.
-> Classes:
    -> Product (attributes: name, stock quantity)
-> Methods:
    -> 'Product.checkStock()': Returns the current stock quantity.

7. Car Rental System (Simple):

-> Problem: Check the availability of a car for a specific date.
-> Classes:
    -> Car (attributes: model, availability status)
-> Methods:
    -> 'Car.isAvailable(date)': Checks if the car is available for the provided date (returns True/False).

8. Employee Payroll System (Simple):

-> Problem: Calculate the total pay for an employee based on a fixed hourly rate and worked hours.
-> Classes:
    -> Employee (attributes: name, hourly rate)
-> Methods:
    -> 'Employee.calculatePay(hours)': Calculates the total pay by multiplying hourly rate with worked hours.

9. Hotel Booking System (Simple):

-> Problem: Check the availability of a room for a specific date.
-> Classes:
    -> Room (attributes: room number, availability status)
-> Methods:
    -> 'Room.isAvailable(date)': Checks if the room is available for the provided date (returns True/False).

10. Social Media Platform (Simple):

-> Problem: Create a user profile and display the username.
-> Classes:
    -> User (attributes: username)
-> Methods:
    -> 'User.getProfile()': Returns the username of the user.


*/