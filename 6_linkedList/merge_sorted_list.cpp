#include <iostream>
using namespace std;

class ListNode {
     public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    ListNode* mergedHead = NULL;
    if (l1->val < l2->val) {
        mergedHead = l1;
        mergedHead->next = mergeTwoLists(l1->next, l2);
    } else {
        mergedHead = l2;
        mergedHead->next = mergeTwoLists(l1, l2->next);
    }
    return mergedHead;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(5);

    ListNode* l2 = new ListNode(2);
    l2->next = new ListNode(4);
    l2->next->next = new ListNode(6);

    ListNode* merged = mergeTwoLists(l1, l2);
    printList(merged);

    return 0;
}