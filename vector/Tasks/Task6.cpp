// Given Q queries, checks if the given number is present in the array or not.
// NOTE : value of all the elements in the array is less then 10^5.

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
    for(int ele : nums) {
        cout << ele << " ";
    }
    int max_size = 1e5 + 10;
    vector <int> frequency(max_size,0);
    for(int i=0;i<nums.size();i++) {
        frequency[nums[i]]++;
    }

    int que;
    while(1) {
        cout << "\nEnter Query :";
        cin >> que;
        cout << "Frequency in the array :" << frequency[que] << endl;
    }

    return 0;
}