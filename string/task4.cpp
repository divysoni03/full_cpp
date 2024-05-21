// 4. Problem Statement: Create a program to analyze product reviews. Implement a function that calculates the average rating for a product based on a list of review scores.

//    Sample Test Case:
//    - Input: "4, 5, 3, 2, 4"
//    - Output: Average rating: 3.6

#include<iostream>
using namespace std;

int main(){
    float reviews[5],stars,rating; 
    int size = sizeof(reviews)/sizeof(reviews[0]);

    for(int i=0;i<size;i++){
        cout << "\ncustomer : " << i << endl << "Enter your rating : " ;
        cin >> stars;
        if(stars>5){
            cout << "Inappropriat rating rate betweeen 0 to 5 !" << endl;
            return;
        }
        rating += stars;
    }
    cout << "Total reviews : "<< size <<"\nYour product rating : " << rating/size << endl;
    return 0; 
}