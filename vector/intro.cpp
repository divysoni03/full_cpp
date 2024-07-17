// Vectors in C++ are part of the Standard Template Library (STL) and are a type of sequence container that provides dynamic array functionality. Here’s a basic introduction to vectors in C++:

// Definition
// A vector in C++ is a sequence container that can change size. They are similar to arrays but offer more flexibility in terms of size management.

// Header File
// To use vectors in C++, you need to include the vector header file:

#include<iostream>
#include <vector>
using namespace std;

// declaration of vector in different ways 

// 1. default way to declare vector
vector<int> myVector;

// 2.fill constructor
vector<int> myVector(10); // Creates a vector with 10 default-initialized integers
vector<int> myVector(10, 5); // Creates a vector with 10 elements, each initialized to 5

// 3.initializing list using elements
vector<int> myVector = {1, 2, 3, 4, 5}; // Creates a vector with the specified elements

// 4.range vector
vector<int> anotherVector = {1, 2, 3, 4, 5};
vector<int> myVector(anotherVector.begin(), anotherVector.end()); // Copies elements from anotherVector

// common vector operation which help to remove add etc. with vector elements

// 1. adding elements
myVector.push_back(10); // it will push that element in the back and it will increase the size of vector by one and capacity by power of 2

// 2.accessing elements

// using [] square brackets
int value = myVector[0]; // Accesses the first element

// using .at methods 
int value = myVector.at(0); // Accesses the first element

// 3.remove elements from vector
myVector.pop_back(); // Removes the last element

// 4. size and capacity
myVector.size(); // returns size of vector
myVector.capacity(); // returns capacity of vector 

//resize method add and removes size of vector which is not useful for now 
myVector.resize(new_size);

// reverse the vector
myVector.reserve(30); // Reserves space for at least 30 elements

// iterates 
for (auto it = myVector.begin(); it != myVector.end(); ++it) {
    std::cout << *it << " "; // Prints elements of the vector
}

// where .begin() returns beginning of vector and .end() end of vector


