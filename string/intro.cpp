#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
    //Declare and initialize a string
    string myStr = "Hello, World";

    //length -> returns the length of the string
    // cout << myStr.length();

    //substr() -> used to extract a part of a string
    // string mySubStr = myStr.substr(7, 5);
    // cout << mySubStr << endl; 

    //find() -> returns index of found substring (returns -1 if not found)
    // int position = myStr.find("ll");
    // cout << "found at position: " << position << endl;
    // if(position != string::npos) {
    //     cout << "'World' found at position: " << position << endl;
    // } else {
    //     cout << "'World' not found in the string." << endl;
    // }

    //replace() -> replaces a certain substring into the given string
    // myStr.replace(7, 5, "everyone");
    // cout << "After replacement: " << myStr << endl;

    //append() -> add new string at the end of an existing one
    // myStr.append(" Have a nice day!");
    // cout << "After appending: " << myStr << endl;

    //erase() -> used to remove a part of a string
    // myStr.erase(6, 9);
    // cout << "After erasing: " << myStr << endl;

    //compare() -> match 2 strings (output is same as strcmp())
    // string anotherString = "Hello, World";

    // int comparision = myStr.compare(anotherString);
    // if(comparision == 0) {
    //     cout << "The strings are equal." << endl;
    // } else if(comparision < 0) {
    //     cout << "The first string is less than the second string." << endl;
    // } else {
    //     cout << "The first string is greater than the second string." << endl;
    // }

    //swap() -> used to swap 2 strings
    // string tempString = "Goodbye!";
    // cout << "Before Swap - myStr: " << myStr << ", tempString: " << tempString << endl;
    // myStr.swap(tempString);
    // cout << "After Swap - myStr: " << myStr << ", tempString: " << tempString << endl;

    //size() -> get the size in bytes
    // cout << "Size of the string in bytes: " << myStr.size() << endl;

    //resize() -> allocate a new size to the string
    // myStr.resize(50);
    // cout << "After resizing: " << myStr << endl;
    // cout << "Size of the string in bytes: " << myStr.size() << endl;

    //at() -> returns a character present the the specified index
    // char character = myStr.at(2);
    // cout << "Character at position 2: " << character << endl;

    //copy
    // string myStrCopy;
    // myStrCopy.assign(" Dhruv is teaching Python!"); // myStrCopy = " Dhruv is teaching Python!";
    // cout << myStrCopy << endl;
    // myStr.resize(myStr.size() + myStrCopy.size());
    // myStrCopy.copy(&myStr[12], myStr.size());
    // cout << "Copied string: " << myStr << endl;

    return 0;
}

/*
Tasks - Level 0:

1. Problem Statement: You are tasked with creating a program for a library management system. Implement a function that takes a book title as input and checks if it matches any of the books currently available in the library's database.

   Sample Test Case:
   - Input: "The Great Gatsby"
   - Output: Book found in the library database.

2. Problem Statement: Develop a program to process customer feedback for a restaurant. Write a function that checks if a given feedback comment contains any inappropriate language or words.

   Sample Test Case:
   - Input: "The food was terrible and the service was awful."
   - Output: Inappropriate language detected.

3. Problem Statement: You are building a chat application and need to implement a function that checks if a given username is available or already taken by another user.

   Sample Test Case:
   - Input: "user123"
   - Output: Username available.

4. Problem Statement: Create a program to analyze product reviews. Implement a function that calculates the average rating for a product based on a list of review scores.

   Sample Test Case:
   - Input: "4, 5, 3, 2, 4"
   - Output: Average rating: 3.6

5. Problem Statement: Develop a program for a word game. Implement a function that checks if a player's guess matches the hidden word, considering both the characters and their positions.

   Sample Test Case:
   - Input: Guess: "rainbow", Hidden Word: "rainbow"
   - Output: Correct guess!

6. Problem Statement: You are building a music player application. Create a function that extracts the artist's name from a given song title.

   Sample Test Case:
   - Input: "Shape of You - Ed Sheeran"
   - Output: Artist: Ed Sheeran

7. !ERROR 404 - Program not found

8. Problem Statement: Develop a program to process customer orders for an online store. Implement a function that extracts the product name and quantity from a given order string.

   Sample Test Case:
   - Input: "2 x iPhone 12, 1 x AirPods Pro"
   - Output: Product: iPhone 12, Quantity: 2; Product: AirPods Pro, Quantity: 1

9. Problem Statement: You are building a program to analyze social media posts. Create a function that identifies and extracts hashtags from a given post.

   Sample Test Case:
   - Input: "Just finished my workout! #fitness #healthyliving"
   - Output: Hashtags: #fitness, #healthyliving

10. Problem Statement: Implement a program to manage inventory for a retail store. Write a function that checks if a given product is in stock based on its SKU (Stock Keeping Unit).

    Sample Test Case:
    - Input: SKU: "ABC123"
    - Output: Product in stock.
*/