// 2. Problem Statement: Develop a program to process customer feedback for a restaurant. Write a function that checks if a given feedback comment contains any inappropriate language or words.

//    Sample Test Case:
//    - Input: "The food was terrible and the service was awful."
//    - Output: Inappropriate language detected.

#include <iostream>
#include <string>
#include<cctype>
using namespace std;

string toLower(const string &str) {
    string result = str;
    for(int i=0;i<str.length();++i){
        result[i] =tolower(result[i]);
    }
    return result;
}

bool compareWord(const string &word, const string badwords[], int size) {
    for (int i = 0; i < size; ++i) {
        if (word == badwords[i]) {
            return true;
        }
    }
    return false;
}

bool checkword(const string &feedback, const string badwords[], int size) {
    string word;
    for (int i = 0; i <= feedback.length(); ++i) {
        if (feedback[i] == ' ') { //checks current character is space or not , and checks the condition and compare words
            if (word != "") {
                word = toLower(word);
                if (compareWord(word, badwords, size)) {
                    return true;
                }
                word.clear();
            }
        } else {
            word += feedback[i]; // if its current character is not space then it saves in the word variable
        }
    }
    return false;
}

int main() {
    string badwords[] = {"terrible", "awful", "bad", "horrible", "disgusting"};
    int size = sizeof(badwords) / sizeof(badwords[0]);

    string feedback = "The food was terrible and the service was awful.";

    if (checkword(feedback, badwords, size)) {
        cout << "Inappropriate language detected." << endl;
    } else {
        cout << "No inappropriate language detected." << endl;
    }

    return 0;
}
