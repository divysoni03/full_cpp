#include<iostream>
using namespace std;

bool isPalindrome(string s) {
    for(char ch: s) {
        ch = (char) tolower(ch);
    }
    string str[s.size()];
    int count =0;
    for(int i=0;i<s.size();++i) {
        if(s[i]>=97&&s[i]<=122) {
            str[count] = s[i];
            count++;
        }
    }
    int i=0,j=count-1;
    while(i<=j) {
        if(str[i] != str[j]) {
            return false;
        }
        i++;j--;
    }
    return true;
}

int main() {
    cout << isPalindrome("A man, a plan, a canal: Panama") << endl;
}