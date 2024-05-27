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
    }
    void readFile(){
        ifstream file(filename);

        if(file.is_open()){
            while(getline(file,str)){
                cout << str ;
            }
        }
        else{
            cout << "ERROR, can't open the file\nExiting the program..." << endl;
        }
        file.close();
    }
    void updateFile(){
        fstream file(filename);
        // ofstream file2(filename);
        string word, line,new_word;
        int word_index;
        bool found = false;

        cout << "Enter the word in file: ";
        cin >> word;
        cin.ignore();

        if(file.is_open()) {
            while(getline(file, line)){
                word_index = line.find(word);
                if(word_index != string::npos){
                    cout << "Enter new word to replace : ";
                    getline(cin,new_word);
                    cin.ignore();
                    word.resize(word.size()+new_word.size());
                    // word.replace(word_index,new_word.size(),new_word);
                    new_word.copy(&word[0],word.size());
                    file << word;
                    found = true;
                }
            }

            if(!found) {
                cout << "Word \"" << word << "\" is found in the file And updated with \"" << new_word << "\"" << endl;
            }
            else{
                cout << "Word \"" << word << "\" not found in the file." << endl;
            }

            file.close();
        } else {
            cout << "Error opening the file..." << endl;
        }
    }
    void deleteFile() {
        ifstream file(filename);
        string word, line;
        int word_index;
        bool found = false;

        cout << "Enter the word in file: ";
        cin >> word;
        cin.ignore();

        if(file.is_open()) {
            while(getline(file, line)){
                word_index = line.find(word);
                if(word_index != string::npos){
                    // cout << "Enter new word to replace : ";
                    // getline(cin,new_word);
                    cin.ignore();
                    word.replace(word_index,0,"");
                    found = true;
                }
            }

            if(!found) {
                cout << "Word \"" << word << "\" is found in the file And deleted " << endl;
            }
            else{
                cout << "Word \"" << word << "\" not found in the file." << endl;
            }

            file.close();
        } else {
            cout << "Error opening the file..." << endl;
        }
    }

};

int main(){
    int choice;
    fileHandler f("divy");  
    
    do{
        cout << "\n1.write file\n2.read file\n3.update file\n4.delete file\n0.Exit\nEnter Your Choice : ";
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
                f.deleteFile();
                break;
            default:
                cout << "Invalid Input !! Exiting the program..." << endl;
                break;
        }
    }while(choice != 0);
    
    return 0;
}