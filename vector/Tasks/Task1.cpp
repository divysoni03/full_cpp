// find the total number of pairs in the array whose sum is equal to the given value of x.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums(10);
    cout << "Enter values of the array" << endl;
    for(int i = 0; i < nums.size(); i++) {
        cout << "Enter " << i << "'th value: ";
        cin >> nums[i];
    }
    for(int ele : nums) {
        cout << ele << " ";
    }

    int x,pairs=0;
    cout << "\nEnter Value of x:";
    cin >> x; 

    for(int i=0;i<nums.size();i++) {
        for(int j=i+1;j<nums.size();j++) {
            if(nums[i]+nums[j] == x) {
                pairs++;
                cout << "i :"<<i <<", j :" <<j << endl;
            }
        }
    }
    cout << "\nTotal pairs :" << pairs << endl;
    return 0;
}
