// 3. Develop a C++ application that copies the contents of one text file into another.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class fileHandler{
    private:
        string str;
    public:
        string filename;
        void writefile(){
            ofstream file(filename.append(".txt"));
            if(file.is_open()){
                cout << "Enter text :" ;
                getline(cin,str);
                // cin.ignore();
                file << str << endl;
            } 
            else{
                cout << "ERROR opening the file !! \nExiting the program ... ";
                exit(0);
            }
            file.close();
        }
       
        void readfile(){
            ifstream file(filename.append(".txt"));
            if(file.is_open()){
                while(getline(file,str)){
                    cout << str;
                }
                file.close();
            }
            else{
                cout << "ERROR opening the file !! \nExiting the program ... ";
                exit(0);
            }
            file.close();
        }
        void copyfile(){
            ifstream file(filename.append(".txt"));
            ofstream file2("copiedFile.txt");

            if(file.is_open() || file2.is_open()){
                while(getline(file,str)){
                    file2 << str << endl;
                }
                cout << "File succefully copied !! " << endl;
            }
            else{
                cout << "ERROR opening the file !! \nExiting the program ... ";
                exit(0);
            }
            file.close();
            file2.close();
        }
};

int main(){
    int choice;
    fileHandler f;

    do{
        // system("cls");
        // cin.ignore();
        cout << "\n1.write file\n2.read file\n3.copy file to another location\n0.exit\nEnter your choice :";
        cin >> choice ;
        cin.ignore();

        if(choice == 0){
            cout << "exiting the program..." << endl;
            exit(0);
        }

        cout << "Enter filename : ";
        getline(cin ,f.filename); 
        // cin.ignore();

        switch(choice){
            case 1:
                f.writefile();
                // system("cls");
                break;
            case 2:
                f.readfile();
                // system("cls");
                break;
            case 3:
                f.copyfile();
                // system("cls");
                break;
            default:
                cout << "Invalid Input !! Enter Again !! \nExiting the program..." << endl;
                break;
        } 
        // system("cls");
    }
    while(choice != 0);

    return 0;
}