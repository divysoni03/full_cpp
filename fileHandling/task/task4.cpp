// 4. Implement a program that reads a file containing a list of names and sorts them alphabetically.
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class fileHandler{
private:
    string str;
public:
    string filename;
    string Names[10];
    int count=0;

    void writeNames(){
        ofstream file(filename.append(".txt"),ios::app);

        if(file.is_open()){
            cout << "Enter text :";
            getline(cin , str);
            file << str << ",";
            Names[count++] = str;
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
    void allnames(){
        for(int i=0;i<count;i++){
            cout << Names[i] << ",";
        }
    }
    void sortNames(){
        ofstream file(filename.append(".txt"));

        for(int i=0;i<count-1;i++){
            for(int j=i+1;j<count;j++){
                if(Names[i]>Names[j]){
                    string temp = Names[i];
                    Names[i] = Names[j];
                    Names[j] = temp;  
                }
            }
        }
        if(file.is_open()){
            for(int i=0;i<count;i++) {
                file << Names[i] << ",";
            } 
            file.close();
        }
    }
};

int main(){
    int choice = 0 ;
    fileHandler f;

    do{
        cout << "\n1.write names\n2.read names\n3.sort names\n4.all names\n0.exit\nEnter your choice : ";
        cin >> choice ;
        cin.ignore();

        if(choice == 0){
            cout << "Exiting the program ... " << endl;
            exit(0);
        }

        cout << "Enter filename : " ;
        getline(cin , f.filename);
        // cin.ignore();

        switch(choice){
            case 1:
                f.writeNames();
                break;
            case 2:
                f.readNames();
                break;
            case 3:
                f.sortNames();
                break;
            case 4:
                f.allnames();
                break;
            default:
                cout << "Invalid choice !! \nExiting the program..." << endl;
                break;
        }
    }
    while(choice != 0);

    return 0;
}