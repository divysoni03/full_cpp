// count the number of triplets whose sum is equal to the given value of x.

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

    int x,tripletsPairs=0;
    cout << "\nEnter Value of x:";
    cin >> x; 

    //finding triplets pairs TIME COMPLEXITY : O(N^3)
    for(int i=0;i<nums.size();i++) {
        for(int j=i+1;j<nums.size();j++) {
            for(int k=0;k<nums.size();k++) {
                if((nums[i]+nums[j]+nums[k]) == x) {
                    tripletsPairs++;
                    cout << "i :" << i << ", j :" << j << ", k :" << k << endl;
                }
            }
        }
    }
    cout << "\nTotal number of pairs : " << tripletsPairs << endl;
    return 0;
}