// 7. Write a C++ program that merges two sorted text files into a single sorted file.
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class fileHandler{
private:    
    string str;
public: 
    string filename;
    // fileHandler(string filename):filename(filename){}
    void writeFile(){
        ofstream file(filename.append(".txt"));

        if(file.is_open()){
            cout << "Enter text :";
            getline(cin , str);
            file << str << endl;
        }
        else{
            cout << "Error opening the file !! Exiting the program... " << endl;
        }
        file.close();
    }
    void readNames(){
        ifstream file(filename.append(".txt"));

        if(file.is_open()){
            while(getline(file,str)){
                cout << str ;
            }
        }
        else{
            cout << "Error opening the file !! Exiting the program..." << endl;
        }
        file.close();
    }
    void mergeFiles(const char* filename1,const char* filename2){
        ifstream file1(filename1);
        ifstream file2(filename2);

        fstream file("mergedFile.txt");
        if(file.is_open()){ 
            while(getline(file1,str)){
                file << str;
            }
            while(getline(file2,str)){
                file << str;
            }
        }
        else{
            cout << "Error opening the file !\nExiting the program...";
        }
        file.close();
        file1.close();
        file2.close();
    }
};

int main(){
    int choice;
    string filename;
    string file1,file2;
    fileHandler f;

    do{
        cout << "\n1.write\n2.read\n3.merge files\n0.exit\nEnter your choice : " ;
        cin >> choice;
        cin.ignore();

        cout << "Enter filename to be created : ";
        getline(cin,filename);
        f.filename = filename;    
        if(choice == 0){
            cout << "Exiting the program... ";
            exit(0);
        }

        switch(choice){
            case 1:
                f.writeFile();
                break;
            case 2:
                f.readNames();
                break;
            case 3:
                cout << "Enter two filenames : ";
                getline(cin,file1);
                // cin.ignore();
                getline(cin,file2);
                f.mergeFiles(&file1.append(".txt"),&file2.append(".txt"));
                break;
            default:
                cout << "Invalid Input ! \nExiting the program...";
                break;
        }
    }
    while(choice != 0);

    return 0;
}