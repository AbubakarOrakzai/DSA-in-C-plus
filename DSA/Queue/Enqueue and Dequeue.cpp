#include <iostream>
using namespace std;

// Node class definition
class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

// Queue class definition
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() {
        front = rear = nullptr;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Function to add an element to the queue
    void enqueue(int new_data) {
        Node* new_node = new Node(new_data);
        if (isEmpty()) {
            front = rear = new_node;
            printQueue();
            return;
        }
        rear->next = new_node;
        rear = new_node;
        printQueue();
    }

    // Function to remove an element from the queue
    void dequeue() {
        if (isEmpty()) {
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) rear = nullptr;
        delete temp;
        printQueue();
    }

    // Function to print the current state of the queue
    void printQueue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        cout << "Current Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Driver code to test the queue implementation
int main() {
    Queue q;

    // Enqueue elements into the queue
    q.enqueue(10);
    q.enqueue(20);

    // Dequeue elements from the queue
    q.dequeue();
    q.dequeue();

    // Enqueue more elements into the queue
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Dequeue an element from the queue (this should print 30)
    q.dequeue();
    
    return 0;
}
