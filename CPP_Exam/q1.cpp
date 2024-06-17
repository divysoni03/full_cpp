//  1. Create a Book class with attributes bookID, title, isAvailable.
//  2. Create a User class with attributes userID, name, borrowedBook (a single Book object).
//  3. Implement methods in the Book class to borrowBook and returnBook.
//  4. Implement methods in the User class to borrowBook and returnBook.
//  5. Create a menu-driven program to demonstrate borrowing and returning books.
//  Sample Output:
//  1. Borrow a book
//  2. Return a book
//  3. Exit Enter your choice: 1 Enter Book ID to borrow: 101 Book borrowed successfully!
#include<iostream>
using namespace std;

class Book {
    private:
        int bookID;
        string title;
        bool isAvailable;
    public:
        Book(){}
        Book(int bookID,string title){
            this->bookID = bookID;
            this->title = title;
            this->isAvailable = true;
        }

        int getID(){
            return this->bookID;
        }

        bool borrowBook(){
            if(isAvailable){
                this->isAvailable = false;
                return true;   
            }else return false;
        }
        bool returnBook(){
            if(!isAvailable){
                isAvailable = true;
                return true;
            }else return true;
        }
};

class User : public Book{
    private:
        int userID;
        string name;
        Book *books;
        int max_books,curr_book;
    public:
        User(int userID,string name):userID(userID),name(name){
            this->max_books= 10;
            this->curr_book = 0;
            books = new Book[max_books];
        }
        void addBook(Book &b){
            if(curr_book > max_books) cout << "book limit is over !";
            else {
                books[curr_book++] = b;
            }
        }
        void borrowBook(int BookID){
            bool borrow;
            for(int i=0;i<curr_book;i++){
                if(books[i].getID() == BookID){
                    borrow = books[i].borrowBook();
                    break;
                }
                else cout << "Book not found!" << endl;
            }
            if(borrow) {
                cout << "Book borrowed successfully! " << endl;
            }else cout << "";
        }
        void returnBook(int BookID){
            bool returnbook;
            for(int i=0;i<curr_book;i++){
                if(books[i].getID() == BookID){
                    returnbook = books[i].borrowBook();
                    break;
                }
                else cout << "Book not found!" << endl;
            }
            if(returnbook) {
                cout << "Book borrowed successfully! " << endl;
            }else cout << "";
        }
};

int main() {
    int choice,book_id;

    Book b1(101,"harry potter");
    Book b2(102,"ikigai");
    User user1(101,"divy");
    user1.addBook(b1);
    user1.addBook(b2);

    do {
        cout << "1.Borrow a book\n2.Return a book\n3.Exit\nEnter your choice : ";
        cin >> choice;

        if(choice == 3){ 
            cout << "Exiting the Program ...";
            exit(0);
        }
        switch(choice){
            case 1:
                cout << "Enter Book ID to borrow: ";
                cin >> book_id;
                user1.borrowBook(book_id);
                break;
            case 2:
                cout << "Enter Book ID to borrow: ";
                cin >> book_id;
                user1.returnBook(book_id);
                break;
            default:
                cout << "Invalid Input !! " << endl;
        }
    }
    while(choice != 3);
    return 0;
}