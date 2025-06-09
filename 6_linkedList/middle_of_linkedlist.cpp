// middle of a linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* findMiddle(Node* head) {
    if (!head) return nullptr;
    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;

    while (fast && fast->next) {
        fast = fast->next->next;
        Node* next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    if (fast) {
        // Odd length list
        cout << "Middle element: " << slow->data << endl;
        cout << "Reversed first half: ";
        printList(prev);
        cout << "Second half: ";
        printList(slow);
    } else {
        // Even length list
        cout << "Middle elements: " << prev->data << " and " << slow->data << endl;
        cout << "Reversed first half: ";
        printList(prev);
        cout << "Second half: ";
        printList(slow);
    }

    return slow;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    findMiddle(head);

    return 0;
}
