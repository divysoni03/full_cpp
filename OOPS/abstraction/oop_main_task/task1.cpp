// 1. Library Management System:
//    Design a system for a library where you can add, remove, and search for books. Each book should have attributes like title, author, and ISBN.
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class FileHandler{
    private:
        string str;
    public:
        string filename;

        void writeFile(string title,string auther,float price,int id){
            ofstream file(filename.append(".txt")); // writing file name

            if(file.is_open()){
                file << title << "," << auther << "," << id << "," << price << endl;

                file.close();
            }else cout << "Error opening the file !! please try again ..." << endl;
        }

        void readFile(){
            ofstream file(filename.append(".txt")); // writing file name

            if(file.is_open()){
                while(getline(file,str)){
                    cout << str << endl;
                }
                
                file.close();
            }else cout << "Error opening the file !! please try again ..." << endl;
        }

        void updateFile(string title,string auther,int id, float price){
            ofstream file(filename.append(".txt"), ios::out); // where mode is ios : input and output stream and output mode
            string update = "";
            if(file.is_open()){
                while(getline(file,str)){
                    if(str.find(title) != string::npos){
                        cout << "Found the book !!\nNow Enter update (Like -> title,auther,id,price) : " ;
                        cin >> update;
                        str.resize(str.size()+update.size());
                        update.copy(&str,str.size());
                        file << str;
                    }
                } 
                file.close();
            }
            
        }
};
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
