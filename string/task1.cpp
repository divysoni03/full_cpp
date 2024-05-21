// 1. Problem Statement: You are tasked with creating a program for a library management system. Implement a function that takes a book title as input and checks if it matches any of the books currently available in the library's database.

//    Sample Test Case:
//    - Input: "The Great Gatsby"
//    - Output: Book found in the library database.

#include<iostream>
#include<string>
using namespace std;

int main() {
    string bookDataBase[] = {
        "The Great Gatsby", 
        "To Kill a Mockingbird", 
        "1984", 
        "Pride and Prejudice", 
        "The Catcher in the Rye", 
        "The Hobbit", 
        "Fahrenheit 451", 
        "Moby-Dick", 
        "Jane Eyre", 
        "War and Peace", 
        "Animal Farm", 
        "Great Expectations", 
        "The Odyssey", 
        "Crime and Punishment", 
        "Wuthering Heights", 
        "The Brothers Karamazov", 
        "Brave New World", 
        "Anna Karenina", 
        "The Adventures of Huckleberry Finn", 
        "The Iliad", 
        "Les Misérables", 
        "A Tale of Two Cities", 
        "Don Quixote", 
        "Gone with the Wind", 
        "The Count of Monte Cristo", 
        "The Scarlet Letter", 
        "The Picture of Dorian Gray", 
        "Sense and Sensibility", 
        "Dracula", 
        "The Grapes of Wrath", 
        "Frankenstein", 
        "Heart of Darkness", 
        "The Sun Also Rises", 
        "Madame Bovary", 
        "The Secret Garden", 
        "Of Mice and Men", 
        "Catch-22", 
        "The Lord of the Rings", 
        "Beloved", 
        "Lolita", 
        "Slaughterhouse-Five", 
        "One Hundred Years of Solitude", 
        "Invisible Man", 
        "The Stranger", 
        "Rebecca", 
        "The Old Man and the Sea", 
        "On the Road", 
        "The Divine Comedy", 
        "The Wind in the Willows"
    };

    string findBook = "";
    bool bookFound = false;

    cout << "Enter a book name: ";
    getline(cin, findBook);

    for (int i = 0; i < 50; i++) {
        if(findBook.compare(bookDataBase[i]) == 0) {
            cout << "Book found!" << endl;
            bookFound = true;
            break;
        }
    }

    if(!bookFound) {
        cout << "Book Not Found" << endl;
    }

    return 0;
}


/*
//Old Code


class Book{
    private:
        string title,auther;
        int id;
        float price;
    public:
        Book(){
            this->title = "";
            this->auther = "";
            this->id = 0;
            this->price = 0.00;
        }
        Book(string title,string auther,int id, float price) : title(title),auther(auther),id(id),price(price){}
        //getter setter methods
        void setTitle(string title){this->title = title;}
        void setAuther(string auther){this->auther = auther;}
        void setId(int id){this->id = id;}
        void setPrice(float price){this->price = price;}

        string getTitle(){return this->title;}
        string getAuther(){return this->auther;}
        int getId(){return this->id;}
        float getPrice(){return this->price;}
        
        void display(){
            cout << "\n--------Book--------"<<endl;
            cout << "Title : " << this->title << endl;
            cout << "Auther : " << this->auther << endl;
            cout << "Book I'd : " << this->id << endl;
            cout << "Price : " << this->price << endl;
        }
};

class Library : public Book{
    private:
        string name;
        Book* books;
        int max_books;
        int curr_books;
    public:
        Library(){
            this->name = "";
            this->curr_books = 0;
            this->max_books =1;
            books= new Book[this->max_books];    
        }
        Library(string name,int max_books){
            this->name = name;
            this->curr_books =0;
            this->max_books = max_books;
            books = new Book[this->max_books];
        }

        void addBook(Book &b){
            if(curr_books > max_books){
                cout << "you reached your max limit of adding books now you can't !!!" << endl;
            }
            else{
                books[curr_books++] = b;
            }
        }

        void displayBooks(){
            for(int i=0;i<curr_books;i++){
                // cout << "\n\n--------Book--------"<<endl;
                // cout << "Title : " << books[i].getTitle() << endl;
                // cout << "Auther : " << books[i].getAuther() << endl;
                // cout << "Book I'd : " << books[i].getId() << endl;
                // cout << "Price : " << books[i].getPrice() << endl;
                books[i].display();
            }
            
        }

        void searchBook(string search_name){
            for(int i=0;i< curr_books;i++){
                string title = books[i].getTitle();
                string auther = books[i].getAuther();
                if(search_name.compare(title)==0 || search_name.compare(auther)==0){
                    cout << "--------BOOK FOUNDED--------";
                    books[i].display();
                    return;
                }   
                else{
                    cout << "!!!!--------BOOK NOT FOUNDED--------!!!!" << endl;
                }
            }
        }
}; 
int main(){
    Library l("dhruv library",3);
    Book b1("harry potter","J. K. Rowling",101,599.99);
    Book b2("the alchemist","Paulo Coelho",102,200.99);
    Book b3("atomic habits","james clear",103,799.99);
    l.addBook(b1);
    l.addBook(b2);
    l.addBook(b3);

    l.displayBooks();

    l.searchBook("harry potter");
    l.searchBook("the alchemist");
    return 0;
}


*/