/*
Introduction to Linked Lists
In computer science, a linked list is a fundamental data structure used for organizing and storing data. Unlike arrays, which store elements in contiguous memory locations, linked lists store elements as nodes, each containing a data part and a reference (or pointer) to the next node in the sequence. This structure allows for efficient insertion and deletion of elements, as it does not require shifting elements, unlike arrays.

Linked lists are particularly useful in scenarios where the size of the dataset is unpredictable or dynamically changing. They come in various forms, including singly linked lists, doubly linked lists, and circular linked lists, each offering unique advantages depending on the application.

Understanding linked lists is crucial for grasping more complex data structures and algorithms. They form the basis for implementing stacks, queues, and even more advanced structures like graphs and trees. In this introduction, we will explore the basic concepts of linked lists, their operations, and their various types, providing a solid foundation for further study and application in computer science.
 */

/*
Basic Operations
Linked lists support several fundamental operations:

1.Insertion: Adding a new node to the list. This can occur at the beginning (head), the end (tail), or at a specific position.

2.Deletion: Removing a node from the list. Similar to insertion, this can occur at the beginning, the end, or a specific position.

3.Traversal: Accessing each node in the list sequentially, typically starting from the head and moving to the next node until the end of the list is reached.

4.Search: Finding a node with a specific value in the list.

5.Update: Modifying the value of a node in the list.
 */

// Node class 
class Node {
public:
    int data;   // Store the value of the node
    Node* next; // Pointer to the next node in the list

    // Constructor to initialize a node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

//linked list class
class LinkedList {
private:
    Node* head; // Pointer to the head of the list

public:
    // Constructor to initialize the head to nullptr
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the beginning of the list
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data); // Create a new node
        newNode->next = head;           // Point the new node's next to the current head
        head = newNode;                 // Update the head to the new node
    }

    // Function to insert a node at the end of the list
    void insertAtEnd(int data) {
        Node* newNode = new Node(data); // Create a new node
        if (head == nullptr) {          // If the list is empty, set the new node as the head
            head = newNode;
            return;
        }
        Node* lastNode = head;
        while (lastNode->next != nullptr) { // Traverse to the last node
            lastNode = lastNode->next;
        }
        lastNode->next = newNode; // Update the last node's next to the new node
    }

    // Function to display the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

//example usage and driver code
#include <iostream>

int main() {
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    list.display(); // Output: 20 -> 10 -> 30 -> 40 -> nullptr

    return 0;
}
