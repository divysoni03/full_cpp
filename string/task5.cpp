/*
5. Problem Statement: Develop a program for a word game. Implement a function that checks if a player's guess matches the hidden word, considering both the characters and their positions.

   Sample Test Case:
   - Input: Guess: "rainbow", Hidden Word: "rainbow"
   - Output: Correct guess!
*/

#include<iostream>
using namespace std;

int main() {
    string hidden_word = "rainbow";
    string user_guess = "";

    while (user_guess.compare(hidden_word)) {
        cout << "Enter a string: ";
        getline(cin, user_guess);

        if(hidden_word.compare(user_guess) == 0) {
            cout << "Correct guess!" << endl;
            break;
        } else {
            system("cls");  //clear screen
            cout << "Try Again!" << endl;
        }
    }
    

    return 0;
}