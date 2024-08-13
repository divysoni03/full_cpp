#include<iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        string word = "";
        string ans = "";
        int i=0;
        do{
            // cout << s[i] << " ";
            if(s[i] == ' ') {
                    ans = "";
                    ans.append(word);
                    // cout << word << " ";
                    word = "";
                
            }
            else {
                word += s[i];
            }
            i++;
        }while(s[i] != '\0');
        cout << endl << ans << endl <<i <<endl;
        return ans.size();
    }
};

int main() {
    Solution s;
    cout << "length : " <<s.lengthOfLastWord("luffy is still joyboy");
    return 0;   
}