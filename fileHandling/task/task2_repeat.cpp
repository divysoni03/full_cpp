#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;

double returnAvarage(const string& filename,const string& columnName){
    ifstream file(filename);
    if(!file.is_open()) { 
        cout << "could not open file!" << endl;
        exit(0);
    }

    string headers;
    getline(file,headers);

    istringstream headerStream(headers);
    string header;
    int columnindex =-1;
    int currindex =0;

    while(getline(headerStream,header,',')){
        if(header == columnName){
            columnindex = currindex;
            break;
        }
        currindex++;
    }

    double sum=0.0;
    int count=0;
    string line;

    while(getline(file,line)){
        istringstream linestream(line);
        string cell;
        int currCellindex =0;
        double value = 0.0;

        while(getline(linestream,cell,',')){
            if(currCellindex == columnindex){
                value = stod(cell);
                sum += value;
                count++;
                break;
            }
            currCellindex++;
        }
    }
    file.close();
    if(count > 0){
        return sum / count;
    }
    else {
        cout << "no data found !! ";
        return -1;
    }
}

int main(){
    int choice = 0;
    string filename = "data.csv";
    string columnName = NULL;

    do {
        cout << "Enter column name to get avarage :";
        cin >> choice;

        switch(choice) {
            case 1:
            columnName = "Age";
        }
        double avg = returnAvarage(filename,columnName);
        cout << "avarage : " << avg;
        return 0;
    }
    while(choice != 0);
    
}