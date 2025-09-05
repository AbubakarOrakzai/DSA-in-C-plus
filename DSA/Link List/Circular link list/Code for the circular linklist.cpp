#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Circular Linked List class
class CircularLinkedList {
private:
    Node* tail;  // we only keep tail pointer

public:
    CircularLinkedList() {
        tail = NULL;
    }

    // Insert at end
    void insert(int value) {
        Node* newNode = new Node(value);
        if (tail == NULL) {
            tail = newNode;
            tail->next = tail;  // Point to itself
        } else {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Delete from head
    void deleteFromHead() {
        if (tail == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* head = tail->next;
        if (head == tail) {
            // Only one node
            delete head;
            tail = NULL;
        } else {
            tail->next = head->next;
            delete head;
        }
    }
    void display() {
        if (tail == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = tail->next;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != tail->next);
        cout << "(back to head)\n";
    }
};

int main() {
    CircularLinkedList cll;

    cll.insert(10);
    cll.insert(20);
    cll.insert(30);
    cll.insert(40);

    cout << "Circular Linked List: ";
    cll.display();

    cll.deleteFromHead();
    cout << "After deleting from head: ";
    cll.display();

    cll.deleteFromHead();
    cout << "After deleting again from head: ";
    cll.display();
}

