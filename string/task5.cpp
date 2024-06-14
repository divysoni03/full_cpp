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
    int count=0;

    system("cls");
    cout << "\t\t<------ Welcome to Word guess game ------>" << endl << endl
         << " > You have 3 chance to guess the word after 3 guess you will get hint of the word ! Best of luck\n" << endl;
    system("pause");

    while (user_guess.compare(hidden_word)) {
        system("cls");
        cout << "\nEnter a Word: ";
        getline(cin, user_guess);

        if(hidden_word.compare(user_guess) == 0) {
            cout << "Correct guess! You won the game in " << count << " guesses !! congratulations..." << endl;
            return 0;
        } else {
            system("cls");  //clear screen
            count++;
            cout << "Try Again!" << endl;
            if(count < 3){
                cout << "You have " << (3-count) << " tries left!" << endl;
                system("pause");
            }
            else {
                if((count-3)==hidden_word.size()){ 
                    cout << "Word was \"" << hidden_word << "\" , Best of luck next time :) " << endl;
                    return 0;
                }else {
                    cout << "---> Hint : ";
                    for(int i=0;i<count-2;i++){
                        cout << hidden_word[i] ;
                    }
                    cout << endl;
                    system("pause");
                }
            }
        }
    }
    

    return 0;
}