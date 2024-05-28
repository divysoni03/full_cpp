// 6. Develop a program that extracts all email addresses from a given text file.

#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
using namespace std;

class fileHandler{
private:    
    string str;
public:
    string filename;
    fileHandler(string filename):filename(filename.append(".txt")){}
    void writeFile(){
        ofstream file(filename);
        if(file.is_open()){
            cout << "Enter text : ";
            getline(cin,str);
            file << str << endl;
        }
        else{
            cout <<  "Error opening the file !\nExiting the program..." << endl;
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
            cout << "Error opening the file ! \nExiting the program...";
        }
        file.close();
    }
    string checkword(const string &line) {
        string word;
        for (int i = 0; i <= line.length(); ++i) {
            if (line[i] == '.') { 
                if (word != "") {
                    // word = toLower(word);
                    word.append(".com");
                    return word;
                    // word.clear();
                }
            } else {
                if(line[i]==' '){
                    word = "";
                }
                word += line[i]; 
            }
        }
        // return false;
    }
    void findEmail(){
        ifstream file(filename);
        string line;
        if(file.is_open()){
            while(getline(file,line)){
                cout << "Emain : " << checkword(line) << endl;
            }
        }
        else{
            cout << "Error opening the file !\nExiting the program..." << endl;
        }
        file.close();
    }
};

int main(){
    int choice;
    string filename;

    cout << "Enter filename to be created : ";
    getline(cin, filename);
    fileHandler f(filename);

    do{
        cout << "\n1.write file\n2.read file\n3.find email in text\n0.exit\nEnter choice : ";
        cin >> choice;
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
                f.findEmail();
                break;
            default:
                cout << "Invalid Input ! \nExiting the program..." << endl;
                break;
        }
    }
    while(choice != 0);

    return 0;
}
