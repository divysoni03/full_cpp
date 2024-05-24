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
                cout << "Enter text : ";
                getline(cin,str);
                file << str << endl;

                file.close();
            }else{
                cout << "ERROR opening the file!" << endl;
            }
        }

        void readfile() {
            ifstream file(filename.append(".txt"));

            if(file.is_open()) {
                // file.clear();
                while(getline(file, str)) {
                    cout << str << endl;
                }

                file.close();
            }   else cout << "Error opening the file..." << endl;
        }
};

int main(){
    fileHandler f;
    f.filename = "divy";
    f.writefile();
    // f.filename = "divy";
    f.readfile();
    return 0;
}