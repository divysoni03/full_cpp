// 3. Problem Statement: You are building a chat application and need to implement a function that checks if a given username is available or already taken by another user.

//    Sample Test Case:
//    - Input: "user123"
//    - Output: Username available.

#include <iostream>
#include <string>
using namespace std;

bool compareUsername(const string &username, const string usernames[], int size) {
    for (int i = 0; i < size; ++i) {
        if (username.compare(usernames[i]) == 0) {
            return true;
        }
    }
    return false;
}

int main() {

    string usernames[] = {"user1234", "divy_soni03", "shreyk", "vedant", "jaynam07"};
    int size = sizeof(usernames) / sizeof(usernames[0]);

    string username;
    cout << "Enter your username to check availability : ";
    getline(cin, username);

    if (compareUsername(username, usernames, size)) {
        cout << "Username " << username << " is not available, it's already taken!" << endl;
    } else {
        cout << "Username " << username << " is available, you can continue!" << endl;
    }

    return 0;
}
