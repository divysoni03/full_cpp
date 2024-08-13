#include<iostream>
#include<cstring>
using namespace std;

// bool first(string str1, string str2) {
//     vector<int> count1(26,0);
//     vector<int> count2(26,0);

//     for(int i=0; i< str1.length(); i++) {
//         count1[(int)str1[i]-'a']++;
//         count2[(int)str2[i]-'a']++;
//     }
//     return count1 == count2;
// }
// int main() {
//     cout << first("wow!", "oww!");
//     return 0;
// }

bool isPalindrome(string str) {
    int left=0, right=str.length()-1;

    while(left < right) {
        if(str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool areAnagrams(string s1, string s2) {
    if(s1.length() != s2.length()) {
        return false;
    }

    int count[26] ={0};

    for(char c : s1) {
        count[c - 'a']++;
    }

    for(char c : s2) {
        count[c - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if(count[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    bool palindromeCheck = isPalindrome(s1);
    bool anagramCheck = areAnagrams(s1, s2);

    if(palindromeCheck && anagramCheck) {
        cout << "Kya baat hai, waah, I can purchase." << endl;
    } else {
        cout << "Are kya yaar mein ye nai khareed paungi yaar." << endl;
    }
    return 0;
}
