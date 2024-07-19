// given an integer array 'a' which is sorted in non-decreasing order now return a array of the square of,
// each number of sorted array which is also sorted in non-decreasing order.
// NOTE : array element could be negative ( Ex. -10 ^2 = 100 )

#include <iostream>
#include <vector>
#include <cstdlib> // for abs() -> absolute function which returns positive value of entered value (just like mode in maths)
using namespace std;

int main() {
    vector<int> nums(5);
    cout << "Enter values of the array" << endl;
    for(int i = 0; i < nums.size(); i++) {
        cout << "Enter " << i << "'th value: ";
        cin >> nums[i];
    }
    cout << "Original Array : ";
    for(int ele : nums) {
        cout << ele << " ";
    }

    int start = 0, end = nums.size() - 1;
    vector<int> temp(nums.size()); // initialize the temp vector with the same size as nums
    int index = nums.size() - 1; // index for the largest square element

    while(start <= end) { // use <= to include the case when start == end
        if(abs(nums[start]) < abs(nums[end])) {
            temp[index] = nums[end] * nums[end];
            end--;
        } else {
            temp[index] = nums[start] * nums[start];
            start++;
        }
        index--;
    }

    cout << "\nOutput Array : ";
    for(int ele : temp) {
        cout << ele << " ";
    }
    return 0;
}
