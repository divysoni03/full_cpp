//Rotate the given array 'a' by k steps, where k is non- negative 
// NOTE : k can be greater then n(size of array) and as equal as size (n).

#include <iostream>
#include <vector>
#include <algorithm> // for reverse function
using namespace std;

// this code below has time complexity of O(n ln n) and auxilary space O(n)
// int main() {
//     vector<int> nums(5);
//     cout << "Enter values of the array" << endl;
//     for(int i = 0; i < nums.size(); i++) {
//         cout << "Enter " << i << "'th value: ";
//         cin >> nums[i];
//     }
//     for(int ele : nums) {
//         cout << ele << " ";
//     }

//     int array[nums.size()];
//     int n = nums.size(),size = 0,k;
//     cout << "\nEnter number of k :";
//     cin >> k;
//     k = k%n;

//     for(int i=n-k;i<n;i++) {
//         array[size++] = nums[i];
//     }
//     for(int i=0;i<k+1;i++) {
//         array[size++] = nums[i];
//     }

//     for(int ele : array) {
//         cout << ele << ", ";
//     }
//     return 0;
// }

// we can write better code for this problem
int main() {
    vector<int> nums(5);
    cout << "Enter values of the array" << endl;
    for(int i = 0; i < nums.size(); i++) {
        cout << "Enter " << i << "'th value: ";
        cin >> nums[i];
    }
    for(int ele : nums) {
        cout << ele << " ";
    }

    int k,n=nums.size();
    cout << "\nEnter Number of K :" ;
    cin >> k;
    k = k%n; // return the minimum value if k is greater then size of vector and we can say minus the multiple of size(n)
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());

    for(int ele : nums) {
        cout << ele << ", ";
    }
    return 0;
}