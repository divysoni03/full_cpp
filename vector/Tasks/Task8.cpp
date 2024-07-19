// given an array of integers 'a', move all the even intergers at the beginning and all odd numbers at,
// after even numbers, order of even and odd numbers not specific.

// input : {1,2,3,4,5}
// output : {2,4,1,3,5}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums(5);
    cout << "Enter values of the array" << endl;
    for(int i = 0; i < nums.size(); i++) {
        cout << "Enter " << i << "'th value: ";
        cin >> nums[i];
    }
    cout << "Original Vector :";
    for(int ele : nums) {
        cout << ele << " ";
    }

    int start=0,end = nums.size()-1;
    while(start < end) {
        if((nums[start]%2 != 0) && (nums[end]%2 == 0)) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;end++;
        }
        else if(nums[start]%2 == 0) start++;
        else if(nums[end]%2 != 0) end--;
    }

    cout << "Output Vector :";
    for(int ele : nums) {
        cout << ele << " ";
    }
    return 0;
}