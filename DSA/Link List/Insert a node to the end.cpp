#include<iostream>
using namespace std;

class Node {
private:
    int data;
    Node* next;

public:
    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterized constructor
    Node(int d) {
        data = d;
        next = NULL;
    }

    // Getter for data
    int getData() {
        return data;
    }

    // Setter for next pointer
    void nextNode(Node* n) {
        next = n;
    }

    // Getter for next pointer
    Node* getNext() {
        return next;
    }
};

class LinkedList {
private:
    Node* head;

public:
    // Constructor to initialize the linked list
    LinkedList() {
        head = NULL;
    }

    // Function to insert a node at a specific position
    void insertNode(int value, int position) {
        Node* newNode = new Node(value);

        if (position == 0) {
            newNode->nextNode(head);
            head = newNode;
            return;
        }

        Node* current = head;
        int count = 0;

        while (current != NULL && count < position - 1) {
            current = current->getNext();
            count++;
        }

        if (current == NULL) {
            cout << "Position is out of bounds." << endl;
            return;
        }

        newNode->nextNode(current->getNext());
        current->nextNode(newNode);
    }

    // Function to insert a node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        // If the list is empty
        if (head == NULL) {
            head = newNode;
            return;
        }

        // Traverse to the last node
        Node* current = head;
        while (current->getNext() != NULL) {
            current = current->getNext();
        }

        // Attach new node at the end
        current->nextNode(newNode);
    }

    // Function to display the list
    void display() {
        Node* current = head;
        while (current != NULL) {
            cout << current->getData() << " -> ";
            current = current->getNext();
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    // Inserting at specific positions
    list.insertNode(10, 0);  // List: 10
    list.insertNode(20, 1);  // List: 10 -> 20
    list.insertNode(30, 1);  // List: 10 -> 30 -> 20
    list.insertNode(40, 2);  // List: 10 -> 30 -> 40 -> 20

    cout << "List after inserting at specific positions:" << endl;
    list.display();

    // Inserting at the end
    list.insertAtEnd(50);    // List: 10 -> 30 -> 40 -> 20 -> 50
    list.insertAtEnd(60);    // List: 10 -> 30 -> 40 -> 20 -> 50 -> 60 

    cout << "List after inserting at the end:" << endl;
    list.display();

    return 0;
}

