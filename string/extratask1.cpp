// 1.Write a C++ program to check if a given string starts with 'C#' or not.
// Sample Input:
// "C++ Sharp"
// "C#"
// "C++"
// Sample Output:
// 1
// 1
// 0
#include<iostream>
#include<string>
using namespace std;

bool CheckWord(string words[],string str,int size){
    for(int i=0;i<size;i++){
        if(str.find(words[i]) != string::npos){
            return 1;
        }
    }
    return 0;
}

int main(){
    string words[] = {"C#","C++","C++ Sharp"};
    int size = sizeof(words)/sizeof(words[0]);
    string str;
    cout << "Enter a string to check : ";
    getline(cin,str);
    if(CheckWord(words,str,size)){
        cout << "Word is present in the line ! " << endl;
    }
    else {
        cout << "Word is not present in the line !" << endl;
    }
    
    return 0;
}