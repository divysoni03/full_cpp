#include<iostream>
using namespace std;

class Book {
    int ISBN; //international standerded book number
    string title, author; // 
    float price;

public:
    // Book() {}

    Book(int isbn, string t, string a, float p) {
        ISBN = isbn;
        title = t;
        author = a;
        price = p;
    }

    Book (Book &book) {
        ISBN = book.ISBN;
        title = book.title;
        author = book.author;
        price = book.price;
    }

    void display() {
        cout << "ISBN: " << ISBN << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b(1244, "Life's a Lie", "Dhruv Sharma", 499);

    // b.ISBN = 1234;
    // b.title = "Life's a Lie";
    // b.author = "Dhruv Sharma";
    // b.price = 499;

    b.display();
    cout << endl;

    Book b1(b);
    b1.display();

    return 0;
}