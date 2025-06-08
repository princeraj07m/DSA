#include <iostream>
using namespace std;

// linked list node
class Node {
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

// linked list class
class List {
    Node* head;
    Node* tail;

    public:
        List() {
            head = tail = NULL;
        }
        // Push in start position
        void push_front(int val){
            Node* newNode = new Node(val);
            if (head == NULL){
                head = tail= newNode;
                return;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
        // Push in last position
        void push_back(int val ){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                return;
            }else{
                Node* temp = head;
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp -> next = newNode;
                tail = newNode;
            }
        }
        // POP first node
        void pop_front(){
            if(head == NULL){
                cout<<"EMPTY linked list "<<endl;
                return;
            }else{
            Node* temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp;
            }
        }

        // POP last node
        void pop_last(){
            if(head == NULL){
                cout<<"EMPTY linked list"<<endl;
                return;
            }else{
                Node* temp = head;
                Node* last;
                while ( temp -> next != NULL)
                {
                    last = temp;
                    temp = temp -> next;
                }
                tail = last;
                tail->next = NULL;
            }
        }

        // Display linked list
        void printll(){
                Node* temp = head;

                while(temp != NULL){
                    cout<< temp->data<<" -> ";
                    temp = temp -> next;
                }
                cout<<"NULL"<<endl;
        }
       
};


int main() {
    List ll;            // NULL
    ll.push_front(1);   // 1 -> NULL
    ll.push_front(2);   // 2 -> 1 -> NULL
    ll.push_front(3);   // 3 -> 2 -> 1 -> NULL
    ll.push_back(2);    // 3 -> 2 -> 1 -> 2 -> NULL
    ll.push_back(3);    // 3 -> 2 -> 1 -> 2 -> 3 -> NULL

    ll.printll();

    ll.pop_front();    // 2 -> 1 -> 2 -> 3 -> NULL
    ll.printll();
    ll.pop_last();     // 2 -> 1 -> 2 -> NULL
    ll.printll();

    return 0;
}