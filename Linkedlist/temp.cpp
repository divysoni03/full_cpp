#include <iostream>
using namespace std;

class Node {
public :
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Linked {
private:
    Node* head;
public :
    Linked() {
        head = nullptr;
    }

    void addNode(int data) {
        Node* newNode = new Node(data);
        if(head == nullptr) {
            head = newNode;
            return;
        }
        Node* currentNode = head;
        while(currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }

    void display() {
        Node* currentNode = head;
        while(currentNode != nullptr) {
            cout << currentNode->data << " -> ";
            currentNode = currentNode->next;
        }
        cout << " null" << endl;
    }
};

int main() {
    Linked list;
    while(1) {
        int data;
        list.display();
        cout << "\nEnter data :";
        cin >> data;
        list.addNode(data);
    }
    return 0;
}