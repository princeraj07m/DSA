#include <iostream>
using namespace std;

class Node {
     public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularLinkedList {
    Node* head;

    public:
        CircularLinkedList() {
            head = NULL;
        }
        // add new node at end
        void push_back(int val) {
            Node* newNode = new Node(val);
            if (head == NULL) {
                head = newNode;
                newNode->next = head; // Point to itself
            } else {
                Node* temp = head;
                while (temp->next != head) {    // add new node at the end
                    temp = temp->next;
                }
                temp->next = newNode;
                newNode->next = head; // Complete the circle
            }
        }

        // add new node at start
        void push_front(int val) {
            Node* newNode = new Node(val);
            if (head == NULL) {
                head = newNode;
                newNode->next = head; // Point to itself
            } else {
                Node* temp = head;
                while (temp->next != head) {    // find the last node
                    temp = temp->next;
                }
                temp->next = newNode; // Link last node to new node
                newNode->next = head; // New node points to head
                head = newNode; // Update head to new node
            }
        }
        // Function to remove the first node
        void pop_front() {
            if (head == NULL) return; // List is empty
            Node* temp = head;
            if (head->next == head) { // Only one node
                delete head;
                head = NULL;
            } else {
                Node* last = head;
                while (last->next != head) { // Find the last node
                    last = last->next;
                }
                last->next = head->next; // Link last node to second node
                head = head->next; // Update head to second node
                delete temp; // Delete old head
            }
        }

        // Function to remove the last node
        void pop_back() {
            if (head == NULL) return; // List is empty
            Node* temp = head;
            if (head->next == head) { // Only one node
                delete head;
                head = NULL;
            } else {
                while (temp->next->next != head) { // Find the second last node
                    temp = temp->next;
                }
                delete temp->next; // Delete last node
                temp->next = head; // Link second last node to head
            }
        }

        // Function to print the circular linked list
        void printList() {
            if (head == NULL) return;
            Node* temp = head;
            do {
                cout << temp->data << "->";
                temp = temp->next;
            } while (temp != head);
            cout << endl;
        }
};

int main() {
    CircularLinkedList cll;
    cll.push_back(1);
    cll.push_back(2);
    cll.push_back(3);
    cll.push_front(0); // Adding at the front
    cll.push_front(-1); // Adding another at the front
    cll.printList();

    return 0;
}