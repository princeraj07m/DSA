#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

void removeCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Step 1: Detect cycle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            break;
        }
    }

    // No cycle
    if (slow != fast) return;

    // Step 2: Find the start of the cycle
    slow = head;
    // Special case: when cycle starts from head
    if (slow == fast) {
        while (fast->next != slow) {
            fast = fast->next;
        }
    } else {
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    // Step 3: Remove cycle
    fast->next = NULL;
}

bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

// For testing
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next; // Cycle: 4 -> 2

    cout << "Cycle before removal: " << (hasCycle(head) ? "Yes" : "No") << endl;

    removeCycle(head);

    cout << "Cycle after removal: " << (hasCycle(head) ? "Yes" : "No") << endl;

    return 0;
}
