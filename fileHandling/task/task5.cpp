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
            }// line word (jaynamsir)divy shreysir

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
                    // word.resize(word.size()-word.size());
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

    void replaceWord() {
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
                cout << "Word \"" << oldWord << "\" not found in the life" << endl;
            }
        } else {
            cout << "Error opening the file..." << endl;
        }
    }

};

int main(){
    int choice;
    string filename;
    cout << "Enter filename to be created : " ;
    getline(cin,filename);
    cin.ignore();
    fileHandler f(filename);  
    
    do{
        cout << "\n1.write file\n2.read file\n3.update file\n4.delete file\n5. Replace Word\n0.Exit\nEnter Your Choice : ";
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