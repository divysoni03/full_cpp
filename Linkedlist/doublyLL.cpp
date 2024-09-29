#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

void insertAtBeginning(Node*& head) {
    int data;
    cout << "\nEnter data: ";
    cin >> data;
    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << " <- " << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;

    insertAtBeginning(head);
    insertAtBeginning(head);
    insertAtBeginning(head);
    insertAtBeginning(head);

    printList(head);

    return 0;
}
