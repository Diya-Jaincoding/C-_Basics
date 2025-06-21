//1. Singly Linked List with Insertions
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node(value);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(Node* &head, int pos, int value) {
    if(pos == 1) {
        insertAtBeginning(head, value);
        return;
    }
    Node* newNode = new Node(value);
    Node* temp = head;
    for(int i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if(temp == NULL) {
        cout << "Position out of range." << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = NULL;

    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtEnd(head, 40);
    insertAtPosition(head, 2, 25); // Insert 25 at position 2

    cout << "Linked List after insertions: ";
    printList(head);

    return 0;
}
