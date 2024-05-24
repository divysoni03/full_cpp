// 2. Write a program that reads a CSV file and calculates the average of a specific column of numerical data.

// Name,Age,Height,Weight
// John,28,5.9,170
// Jane,34,5.7,150
// Alice,23,5.5,120
// Bob,40,6.0,180
// Charlie,29,5.8,165

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class filehandler{
private:
    string str;
public:
    void setFilename(const string& fname) {
        filename = fname + ".txt";
    }
    void writeFile() {
        ofstream file(filename);
        if(file.is_open()) {
            string str;
            cout << "Enter text: ";
            cin.ignore(); // Clear the input buffer
            getline(cin, str);
            file << str << endl;
            file.close();
        } else {
            cout << "ERROR opening the file!!" << endl;
        }
    }
    void readFile() {
        ifstream file(filename);
        if(file.is_open()) {
            string str;
            while(getline(file, str)) {
                cout << str << endl;
            }
            file.close();
        } else {
            cout << "ERROR opening the file!!" << endl;
        }
    }
    int calculateWords() {
        ifstream file(filename);
        if(file.is_open()) {
            int wordCount = 0;
            string str;
            while(file >> str) {
                wordCount++;
            }
            file.close();
            return wordCount;
        } else {
            cout << "ERROR opening the file!!" << endl;
            return 0;
        }
    }
};

int main(){
    do {
        cout << "\n1. Write file\n2. Read file\n3. Print total number of words\n0. Exit" << endl << "Enter your choice: ";
        cin >> choice;

        if(choice == 0) {
            cout << "Exiting the program..." << endl;
            exit(0);
        }

        string filename;
        cout << "Enter your filename: ";
        cin >> filename;
        f.setFilename(filename);

        switch (choice) {
            case 1:
                f.writeFile();
                break;
            case 2:
                f.readFile();
                break;
            case 3:
                cout << "Total words: " << f.calculateWords() << endl;
                break;
            default:
                cout << "Invalid input!!" << endl;
                break;
        }
    } while(choice != 0);
    
    return 0;
}