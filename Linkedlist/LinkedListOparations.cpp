#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Linked {
private :
    Node* head;
public:
    Linked() {
        head = nullptr;
    }

    // linked list operations
    void insertEnd() {
        int tempData;
        cout << "Enter Data :";
        cin >> tempData;
        Node* newNode = new Node(tempData); // made new node
        if(head == nullptr) {
            head = newNode;
            return;
        }
        Node* currentNode = head; // making new node for traversing the linked list
        while(currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
    void insertBegin() {
        int tempData;
        cout << "Enter Data :";
        cin >> tempData;
        Node* newNode = new Node(tempData);
        newNode->next = head; // connecting new node with current head
        head = newNode; // updating the head and making new node the new head
    }
    void deleteEnd() {
        if(head == nullptr) { // if current head is nullptr means there are no nodes in the linked list
            return;
        }
        if(head->next == nullptr) { // if second node (head->next) is nullptr (ending) means there is only one node which is head node so we will delete the head and initialize it with nullptr again as beginning
            delete head;
            head = nullptr;
            return;
        }
        Node* currentNode = head; // we r traversing through linked list and when current's next 's next is null then we will delete current->next and initialize it with nullptr
        while(currentNode->next->next != nullptr) {
            currentNode = currentNode->next;
        }
        delete currentNode->next;
        currentNode->next = nullptr;
    }
    void deleteBegin() {
        if(head == nullptr) {
            return;
        }
        Node* current = head;
        head = current->next;
        delete current;
        current = nullptr;
    }
    void reverseList() { 
        Node* prev = nullptr;
        Node* current = head;
        while(current != nullptr) {
            Node* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }


    //display method
    void display() {
        cout << "Linked List : ";
        Node* currentNode = head; // making a new node to traves through linked list and print it
        while(currentNode != nullptr) {
            cout << currentNode->data << " -> ";
            currentNode = currentNode->next;
        }
        cout << "null" << endl;
    }
};
int main() {
    int choice=0;
    Linked list;
    do{
        system("cls");
        list.display();
        cout << "\n\n1.insert at beginning,\n2.insert at end,\n3.delete node at beginning,\n4.delete node at end,\n5.reverse the linked list,\n0.Exit,\nEnter Your choice :";
        cin >> choice;

        switch(choice) {
            case 1:
                list.insertBegin();
                break;
            case 2:
                list.insertEnd();
                break;
            case 3:
                list.deleteBegin();
                break;
            case 4:
                list.deleteEnd();
                break;
            case 5:
                list.reverseList();
                break;
            case 0:
                cout << "Exiting the program..."<< endl;
                break;
            default:
                cout << "ERROR : invalid input, please try again." << endl;
        }
    }while(choice != 0);
    return 0;
}