// find the unique element in the vector where all other elements are being repeated twice.
// input = {1,2,1,2,3,4,3,5,5};
//output : 4

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums(9);
    cout << "Enter values of the array" << endl;
    for(int i = 0; i < nums.size(); i++) {
        cout << "Enter " << i << "'th value: ";
        cin >> nums[i];
    }
    cout << "All Elements : ";
    for(int ele : nums) {
        cout << ele << " ";
    }

    for(int i=0;i<nums.size()-1;i++) {
        for(int j=i+1;j<nums.size();j++) {
            if(nums[i] == nums[j]) {
                nums[i]=nums[j]=-1;
            }
        }
    }

    for(int ele : nums) {
        if(ele > 0) {
            cout << "Unique Element :"
         << ele << endl;
        }
         return 0;
    }
    cout << "No unique elements." << endl;
    return 0;
}