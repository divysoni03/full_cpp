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
    cout << endl;

    int unique = 0;
    for(int ele : nums) {
        unique ^= ele; //removes the not unique elements from the vector
    }

    cout << "Unique Element : " << unique << endl;

    return 0;
}
