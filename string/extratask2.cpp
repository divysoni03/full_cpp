// 2.Write a C++ program to create a string taking the first 3 characters of a given string. Then, return the string with the 3 characters added to both the front and back. If the given string length is less than 3, use whatever characters are there.
// Sample Input:
// "Python"
// "JS"
// "Code"
// Sample Output:
// PytPythonPyt
// JSJSJS
// CodCodeCod
#include<iostream>
#include<string>
using namespace std;

int main(){
    string letters = "   ",word,word1;

    cout << "Enter word : ";
    getline(cin,word);
    word1.assign(word);

    if(word.size() < 3){
        for(int i=0;i<2;i++){
            letters[i] = word[i];
            letters.resize(2);
        }
    }
    else{
        for(int i=0;i<3;i++){
            letters[i] = word[i];
            // cout << letters;
        }
    }

    word.append(letters);
    letters.append(word);
    cout << "Input : " << word1 << endl << "Output : " << letters << endl;

    return 0;
}