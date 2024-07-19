// find the second largest element in the vector
#include <iostream>
#include <climits>
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

    int max=INT_MIN,smax = INT_MIN;
    for(int i = 0; i < nums.size(); i++) {
        if(max < nums[i]) {
            smax = max;
            max = nums[i];
        } else if(smax < nums[i] && nums[i] != max) {
            smax = nums[i];
        }
    }


    cout << "\nMAX Value :" << max << ",\nSecond MAX Value :" << smax << endl;
    return 0;
}

// int findMax(vector<int> nums) {
//     int max = INT_MIN;
//     for(int i=0;i<nums.size();i++) {
//         if(max < nums[i]) {
//             max = i;
//         }
//     }
//     return max;
// }
// int main() {    
//     vector<int> nums(10);
//     cout << "Enter values of the array" << endl;
//     for(int i = 0; i < nums.size(); i++) {
//         cout << "Enter " << i << "'th value: ";
//         cin >> nums[i];
//     }
//     for(int ele : nums) {
//         cout << ele << " ";
//     }

//     int pos = findMax(nums);
//     nums[pos] = -1;
//     cout << "Second largest Element :" << nums[findMax(nums)] << endl;
//     return 0;
// }