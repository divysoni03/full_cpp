// 3. Library Catalog System:
//    Design a library catalog system where each library has multiple sections, and each section contains multiple books. Create classes for Library, Section, and Book. The Library class should aggregate Section objects, and each Section object should aggregate Book objects. Implement functionalities to add new books, search for books by title or author, and display all books available in a particular section.

#include<iostream>
#include<string.h>
using namespace std;

class Book{
    private:
        string title,auther;
        float price;
        int book_id;
    public:
        Book(){
            this->auther = "";
            this->title = "";
            this->price = 0.0;
            this->book_id = 0;
        }
        Book(string title,string auther,int book_id,float price){
            this->auther = auther;
            this->title = title;
            this->price = price;
            this->book_id = book_id;
        }
        void display(){
            cout << "\n---------Book---------" << endl;
            cout << "Auther : " << auther << " ,";
            cout << "Title : " << title << " ,";
            cout << "Price : " << price << " ,";
            cout << "Book-id : " << book_id << endl;
        }
        void comparebook(string search){
            if(title == search){
                cout << "\n\n-----------BOOK FOUNDED-----------!!" << endl;
                cout << "name : " << title << endl;
                cout << "Auther : " << auther << endl;
                cout << "Price : " << price << endl;
                cout << "BOOK-id : " << book_id << endl;
            }
        }
        // void comparebook(const char * search){
        //     if(strcmp(title, search) == 0){
        //         cout << "\n\n-----------BOOK FOUNDED-----------!!" << endl;
        //         cout << "name : " << title << endl;
        //         cout << "Auther : " << auther << endl;
        //         cout << "Price : " << price << endl;
        //         cout << "BOOK-id : " << book_id << endl;
        //     }
        // }
};

class Section{
    private:
        string name;
        int section_id;
        Book* books;
        int curr_book;
        int MAX_BOOK;
    public:
        Section(){
            this->name = "";
            this->curr_book = 0;
            this->section_id = 0;
            this->MAX_BOOK = 1;
            books = new Book[MAX_BOOK];
        }
        Section(string name, int section_id , int MAX_BOOK){
            this->name = name;
            this->MAX_BOOK = MAX_BOOK;
            this->section_id = section_id;
            this->curr_book = 0;
            books = new Book[MAX_BOOK];
        }

        ~Section(){
            delete[] books;
        }

        void addbook(Book& b){
            if(curr_book > MAX_BOOK){
                cout << "\nYou reached your max limit to add books ! " << endl;
            }
            else{
                books[curr_book++] = b;
            }
        }

        void display(){
            cout << "\n---------Sections---------" << endl;
            cout << "Section Name : " << name << " ,";
            cout << "Section id : " << section_id << endl;
        }

        void displaybooks(){
            cout << "ALL books : "  << endl;
            for(int i=0;i<curr_book;i++){
                books[i].display();
            }
        }
        void searchmethod(string search){
            // string search ;
            // cout << "Enter your title to search the book : ";
            // getline(cin,search);
            // for(int i=0;i<curr_book;i++){
            //     if(books[i].searchBook(search)){
            //         cout << " book " << " detail : " << endl;
            //         books[i].display();
            //     }
            //     else{
            //         cout << "Invalid Input ! " << endl;
            //     }
            // }
            for(int i=0;i<curr_book;i++){
                books[i].comparebook(search);
            }
        }
};

class Library{
    private:
        string name;
        int library_num;
        int curr_section;
        int MAX_SECTION;
        Section* sections;
    public:
        Library(){
            this->name = "";
            this->library_num = 0;
            this->MAX_SECTION = 1;
            this->curr_section = 0;
            sections = new Section[MAX_SECTION];
        }
        Library(string name, int library_num, int MAX_SECTION){
            this->name = name;
            this->library_num = library_num;
            this->MAX_SECTION = MAX_SECTION;
            this->curr_section = 0;
            sections = new Section[MAX_SECTION];
        }

        ~Library(){
            delete[] sections;
        }

        void addsection(Section& s){
            if(curr_section>MAX_SECTION){
                cout << "\nYou reached your max limit for adding sections ! " << endl;
            }
            else{
                sections[curr_section++] = s; 
            }
        }

        void displaysection(){
            cout << "ALL sections : " << endl;
            for(int i=0;i<curr_section;i++){
                sections[i].display();
            }
        }
};
int main(){
    Library gec("GEC college library", 101, 3);

    Section s1("computer engineering" , 1 , 3);
    Section s2("1st semester", 2 , 3);
    Section s3("2nd semester", 3, 2);

    Book b1("java","mctech",1001,500);
    Book b2("ansi C", "balaguru" , 1002, 200);
    Book b3("ansi c++", "balaguru" , 1003 , 250);

    Book b4("physics", "technical", 1004 , 150);
    Book b5("EGD", "atul" , 1005, 200);
    Book b6("maths 1", "mcfery", 1006, 300);

    Book b7("maths 2", "mcfery" ,1007,300);
    Book b8("pps", "balaguru" , 1008 , 200 );

    gec.addsection(s1);
    gec.addsection(s2);
    gec.addsection(s3);

    s1.addbook(b1);
    s1.addbook(b2);
    s1.addbook(b3);
    s2.addbook(b4);
    s2.addbook(b5);
    s2.addbook(b6);
    s3.addbook(b7);
    s3.addbook(b8);

    gec.displaysection();
    s1.displaybooks();
    s2.displaybooks();
    s3.displaybooks();

    s1.searchmethod("java");
    s1.searchmethod("ansi C");
    return 0;
}