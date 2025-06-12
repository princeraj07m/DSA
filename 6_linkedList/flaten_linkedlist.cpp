// to flaten a linked list with next and child pointers
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev; 
    Node* child;

    Node(int val) {
        data = val;
        next = NULL;
        child = NULL;
    }
};

Node* flattenLinkedList(Node* head) {
        if(head == NULL)return NULL;
        Node* curr = head;
        
        while(curr!=NULL){
            if(curr->child != NULL){
                Node* next = curr ->next;
                
                // Flatten the child list 
                curr ->next = flattenLinkedList(curr->child);
                curr ->next ->prev = curr;
                curr->child = nullptr;
                Node* tail = curr;

                // Find the tail of the current flattened list
                while(tail->next != NULL){
                    tail = tail -> next;
                }

                // Connect the tail of the current flattened list to the next node
                tail -> next = flattenLinkedList(next);
                if(tail->next != NULL){
                tail ->next ->prev = tail;
                }
                curr = tail ->next;
            }else{
                curr =curr -> next;
            }
        }
        return head;
    }


void printList(Node* head, int level = 0) {
    Node* curr = head;
    while (curr != NULL) {
        for (int i = 0; i < level; ++i) cout << "    ";
        cout << curr->data;

        if (curr->child != NULL) {
            cout << " -> child:\n";
            printList(curr->child, level + 1);
        } else if (curr->next != NULL) {
            cout << " -> next\n";
        } else {
            cout << " -> NULL\n";
        }

        curr = curr->next;
    }
}


// Print flattened list
void printFlattenedList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->child = new Node(4);
    head->child->next = new Node(5);
    head->child->next->next = new Node(6);

    cout << "Original list:" << endl;
    printList(head);

    head = flattenLinkedList(head);
    cout << "Flattened list:" << endl;
    printFlattenedList(head);

    return 0;
}