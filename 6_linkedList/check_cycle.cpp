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

bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // move one step
        fast = fast->next->next;     // move two steps

        if (slow == fast) {
            return true;             // cycle detected
        }
    }

    return false;                    // no cycle
}



int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Create a cycle
    head->next->next->next->next = head->next; // 4 -> 2

    if (hasCycle(head)) {
        cout << "Cycle detected!\n";
    } else {
        cout << "No cycle.\n";
    }

    return 0;
}