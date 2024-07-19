// sort the array consisting of only 0's and 1's.
//input => array[] = {1,0,0,1,1,0,1,0};
//output => array[] = {0,0,0,0,1,1,1,1};
// HINT : two pointer approach

#include <iostream>
#include <vector>
using namespace std;

// code below has time complexity 0(n) and no auxillary space complexity. efficient solution
int main() {
    vector<int> nums(5);
    cout << "Enter values of the array" << endl;
    for(int i = 0; i < nums.size(); i++) {
        cout << "Enter " << i << "'th value: ";
        cin >> nums[i];
    }
    cout << "Original Array :";
    for(int ele : nums) {
        cout << ele << " ";
    }

    int start = 0,end = nums.size()-1;
    while(start < end) {
        if(nums[start] == 1 && nums[end] == 0) {
            nums[start++] = 0;nums[end--] = 1;
            // start++; end--;
        }
        else if(nums[start] ==1 && nums[end] !=0) end--;
        else if(nums[start] != 1 && nums[end] == 0) start++;
    }

    cout << "\nSorted Array : ";
    for(int ele : nums) {
        cout << ele << " ";
    }
    return 0;
}

// basic and very not efficient solution for this problem
// int main() {
//     int size;
//     cout << "Enter Size of vector:";
//     cin >> size;
//     vector<int> nums(size);
//     cout << "Enter values of the array" << endl;
//     for(int i = 0; i < nums.size(); i++) {
//         cout << "Enter " << i << "'th value: ";
//         cin >> nums[i];
//     }
//     cout << "\nOriginal Array : ";
//     for(int ele : nums) {
//         cout << ele << " ";
//     }

//     int count =0;
//     for(int ele : nums) {
//         if(ele == 0) count++;
//     }
//     for(int i=0;i<nums.size();i++) {
//         if(i < count ) nums[i] = 0;
//         else nums[i] = 1;
//     }

//     cout << "\nSorted Array :";
//     for(int ele : nums) {
//         cout << ele << " ";
//     }
//     return 0;
// }