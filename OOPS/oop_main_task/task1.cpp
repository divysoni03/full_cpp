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
        FileHandler(string filename){ this->filename = filename.append(".txt"); }

        void writeFile(string title,string auther,float price,int id){
            ofstream file(filename); // writing file name

            if(file.is_open()){
                file << title << "," << auther << "," << id << "," << price << endl;

                file.close();
            }else cout << "Error opening the file !! please try again ..." << endl;
        }

        void readFile(){
            ifstream file(filename); // writing file name

            if(file.is_open()){
                while(getline(file,str)){
                    cout << str << endl;
                }
                file.close();
            }else cout << "Error opening the file !! please try again ..." << endl;
        }

        void updateFile(string title,string auther,int id, float price){
            ifstream file(filename,ios::app); // where mode is ios : input and output stream and output mode

            if(file.is_open()){
                file << title << "," << auther << "," << id << "," << price << endl;

                file.close();
            }else cout << "Erros : can't open the file !! try again !\nExiting the program..." << endl; 
        }

        void deleteWord() {
            system("cls");
            ifstream file(filename);
            ofstream tempFile("temp.txt");
            string Word,line;
            bool deleted = false;

            cout << "\nEnter the word to be deleted: ";
            cin.ignore();
            cin >> Word;

            if(file.is_open() && tempFile.is_open()) {
                while(getline(file, line)) {
                    size_t pos;    //size_t => unsigned int
                    while((pos = line.find(Word)) != string::npos) {
                        line.replace(pos, Word.length(),"");
                        deleted  = true;
                    }
                    tempFile << line << endl;
                }

                file.close();
                tempFile.close();

                if(deleted) {
                    // remove((fileName + ".txt").c_str()); // c_ptr() => to convert string into const char pointer
                    // rename("temp.txt", (fileName + ".txt").c_str());
                    remove(filename.c_str());
                    rename("temp.txt", filename.c_str());
                    cout << "Word \"" << Word << "\" deleted successfully." << endl;
                } else {
                    cout << "Word \"" << Word << "\" not found in the file.\nExiting the program..." << endl;
                    system("pause");
                }
            } else { system("pause"); cout << "Error opening the file..." << endl; }
        }

    void replaceWord() {
        system("cls");
        ifstream file(filename);
        ofstream tempFile("temp.txt");
        string oldWord, newWord, line;
        bool replaced = false;

        cout << "\nEnter the word to be replaced: ";
        cin >> oldWord;
        cout << "\nEnter the new word: ";
        cin >> newWord;
        cin.ignore();

        if(file.is_open() && tempFile.is_open()) {
            while(getline(file, line)) {
                size_t pos;    //size_t => unsigned int
                while((pos = line.find(oldWord)) != string::npos) {
                    line.replace(pos, oldWord.length(), newWord);
                    replaced = true;
                }
                tempFile << line << endl;
            }

            file.close();
            tempFile.close();

            if(replaced) {
                // remove((fileName + ".txt").c_str()); // c_ptr() => to convert string into const char pointer
                // rename("temp.txt", (fileName + ".txt").c_str());
                remove(filename.c_str());
                rename("temp.txt", filename.c_str());
                cout << "Word \"" << oldWord << "\" replaced with \"" << newWord << "\" successfully." << endl;
            } else {
                cout << "Word \"" << oldWord << "\" not found in the file" << endl;
                system("pause");
            }
        } else {cout << "Error opening the file..." << endl; system("pause");}
    }
};
class Book{
    private:
        string title,auther;
        int id;
        float price;
    protected:
        //constructors
        Book() {this->title = "";this->auther = "";this->id = 0;this->price = 0.00;}
        Book(string title,string auther,int id, float price) : title(title),auther(auther),id(id),price(price){}
        //getter methods
        void setTitle(string title){this->title = title;}
        void setAuther(string auther){this->auther = auther;}
        void setId(int id){this->id = id;}
        void setPrice(float price){this->price = price;}
        //setter methods
        string getTitle(){return this->title;}
        string getAuther(){return this->auther;}
        int getId(){return this->id;}
        float getPrice(){return this->price;}
        //book display methods
        void display(){
            cout << "\n--------Book--------"<<endl;
            cout << "Title : " << this->title << endl;
            cout << "Auther : " << this->auther << endl;
            cout << "Book I'd : " << this->id << endl;
            cout << "Price : " << this->price << endl;
        }
};

class Library : private Book{
    private:
        string name;
        Book* books;
        int max_books;
        int curr_books;
    public:
        //construtors
        Library(){this->name = "";this->curr_books = 0;this->max_books =1;this->books = nullptr;}
        Library(string name,int max_books){this->name = name;this->curr_books =0;this->max_books = max_books;books = new Book[this->max_books];}
        //adding book method
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
    string library_name;
    int choice,max_books;
    system("cls");
    cout << "<--- Welcome to our Library Management System --->" << "\nEnter Library Name : ";
    getline(cin,library_name);
    cout << "Enter Max Number of Books You want to add : ";
    cin >> max_books;

    Library lib(library_name,max_books);
    system("cls");
    do{
        system("cls");
        cout << "\n------ Welcome to " << library_name << " Library ------"
             << "\n1. Add Book"
             << "\n2. Display Books"
             << "\n3. Update Book"
             << "\n4. Delete Book"
             << "\n5. Store This Data to the file"
             << "\n6. Search Book in file"
             << "\n7. Update Book in file"
             << "\n8. Delete Book in file"
             << "\n0.Exit the Program"
             << "\nEnter a choice : ";
        cin.ignore();
        cin >> choice;
        
        if(choice == 0){system("cls");cout << "\nExiting the Program...";exit(0);}
        
        switch(choice) {
            case 1:
                lib.addBook();
                break;
            case 2:
                lib.displayBooks();
                break;
            case 3:
                lib.updateBook();
                break;
            case 4:
                lib.deleteBook();
                break;
            case 5:
                lib.StoreToFile();
                break;
            case 6:
                lib.searchInFile();
                break;
            case 7:
                lib.updateInFile();
                break;
            case 8:
                lib.deleteInFile();
                break;
            default:
                cout << "Error :: Invalid Input\nExiting the Program..." << endl;
                break;
        }

    }while(choice != 0);
    return 0;
}
