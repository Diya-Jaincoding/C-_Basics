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

void deleteAtBeginning(Node* &head) {
    if(head == NULL) return;

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd(Node* &head) {
    if(head == NULL) return;

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void deleteAtPosition(Node* &head, int pos) {
    if(pos == 1) {
        deleteAtBeginning(head);
        return;
    }

    Node* temp = head;
    for(int i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL) {
        cout << "Position out of range." << endl;
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

int main() {
    Node* head = NULL;

    // Creating Linked List manually
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original List: ";
    printList(head);

    deleteAtBeginning(head);
    cout << "After deleting at beginning: ";
    printList(head);

    deleteAtEnd(head);
    cout << "After deleting at end: ";
    printList(head);

    deleteAtPosition(head, 2);
    cout << "After deleting at position 2: ";
    printList(head);

    return 0;
}
