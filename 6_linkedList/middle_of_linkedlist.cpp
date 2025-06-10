// middle of a linked list
#include <iostream>
using namespace std;

class Node {
     public:
    int data;
    Node* next;
     Node(int val){
            data = val;
            next = NULL;
        }
};

Node* findMiddle(Node* head) {
    if (head == NULL || head->next == NULL) return NULL;
    Node* slow = head;
    Node* fast = head;
    // Node* prev = nullptr;

    while(fast != NULL && fast -> next != NULL ){
        fast = fast->next->next;
        slow = slow ->next;
    }
    cout<<slow->data<<endl;
    return slow;

}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);

    findMiddle(head);

    return 0;
}
