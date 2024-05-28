// 5. Create a file management system in C++ that allows users to create, read, update, and delete text files.

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class fileHandler{
private:
    string str;
    string filename;
public:
    // string filename;
    fileHandler(string filename) {
        this->filename = filename.append(".txt");
    }
    void writeFile(){
        system("cls");
        ofstream file(filename);

        if(file.is_open()){
            cout << "Enter text : ";
            getline(cin,str);
            file << str << endl;
        }
        else{
            cout << "ERROR, can't open the file\nExiting the program..." << endl;
        }
        file.close();
        // system("cls");
    }
    void readFile(){
        system("cls");
        ifstream file(filename);

        cout << "<-- Contant is down below-->" << endl;
        if(file.is_open()){
            while(getline(file,str)){
                cout << str ;
            }
        }
        else{
            cout << "ERROR, can't open the file\nExiting the program..." << endl;
        }
        file.close();
        cout << "\n\n\n";
        system("pause");
        system("cls");
    }
    void updateFile() {
        system("cls");
        ofstream file(filename, ios::app);

        if(file.is_open()) {
            cout << "Enter the data to store into " << filename << ": ";
            getline(cin, str);
            
            file << endl;
            file << str << endl;
            
        } else cout << "Error opening the file..." << endl;
        file.close();
        // system("cls");
    }
    void deleteWord() {
        system("cls");
        ifstream file(filename);
        ofstream tempFile("temp.txt");
        string Word,line;
        bool deleted = false;

        cout << "\nEnter the word to be deleted: ";
        cin >> Word;
        // cout << "\nEnter the new word: ";
        // cin >> newWord;
        cin.ignore();

        if(file.is_open() && tempFile.is_open()) {
            while(getline(file, line)) {
                size_t pos;    //size_t => unsigned int
                while((pos = line.find(Word)) != string::npos) {
                    line.replace(pos, Word.length(), "");
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
                system("pause");
                cout << "Word \"" << Word << "\" not found in the file" << endl;
            }
        } else {
            system("pause");
            cout << "Error opening the file..." << endl;
        }
        // system("cls");
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
                system("pause");
                cout << "Word \"" << oldWord << "\" not found in the file" << endl;
            }
        } else {
            cout << "Error opening the file..." << endl;
        }
        // system("cls");
    }

};

int main(){
    int choice;
    string filename;
    
    cout << "<-- Starting the program --> ";
    system("pause");
    
    system("cls");
    cout << "Enter filename to be created : " ;
    getline(cin,filename);
    // cin.ignore();
    fileHandler f(filename);  
    
    do{

        cout << "\n\n1.write file\n2.read file\n3.update file\n4.delete file\n5. Replace Word\n0.Exit\nEnter Your Choice : ";
        cin >> choice ;
        cin.ignore();

        if(choice == 0){
            cout << "Exiting the program..." << endl;
            exit(0);
        }

        switch(choice){
            case 1:
                f.writeFile();
                break;
            case 2:
                f.readFile();
                break;
            case 3:
                f.updateFile();
                break;
            case 4:
                f.deleteWord();
                break;
            case 5:
                f.replaceWord();
                break;
            default:
                cout << "Invalid Input !! Exiting the program..." << endl;
                break;

        }
    }while(choice != 0);
    
    return 0;
}