#include<iostream>
using namespace std;

class Node {
public:
    int key;
    int data;
    Node* next;

    Node() {
        key = 0;
        data = 0;
        next = NULL;
    }

    Node(int k, int d) {
        key = k;
        data = d;
        next = NULL;
    }
};

class Singly {
public:
    Node* head;

    Singly() {
        head = NULL;
    }

    Singly(Node *n) {
        head = n;
    }

    Node* nodeExists(int k) {
        Node* ptr = head;
        while (ptr != NULL) {
            if (ptr->key == k) {
                return ptr; // Return immediately upon finding the node
            }
            ptr = ptr->next;
        }
        return NULL;
    }

    void appendNode(Node* n) {
        if (nodeExists(n->key) != NULL) {
            cout << "Node already exists with key value: " << n->key << ". Append another node with a different key.\n";
            return;
        }
        if (head == NULL) {
            head = n;
            cout << "Node appended as head node.\n";
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = n;
            cout << "Node appended.\n";
        }
    }

    void prependedNode(Node* n) {
        if (nodeExists(n->key) != NULL) {
            cout << "Node already exists with key value: " << n->key << ". Choose a different key.\n";
        } else {
            n->next = head;
            head = n;
            cout << "Node prepended.\n";
        }
    }

    void displayList() {
        if (head == NULL) {
            cout << "No nodes in the list.\n";
            return;
        }
        cout << "Singly Linked List contents:\n";
        Node* temp = head;
        while (temp != NULL) {
            cout << "(" << temp->key << ", " << temp->data << ") -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    Singly s;

    int key, data;
    cout << "Append Node Operation\n";
    cout << "Enter the key and data of the Node to be appended: ";
    cin >> key >> data;

    Node* n1 = new Node(key, data);
    s.appendNode(n1);
    s.displayList();

    return 0;
}

