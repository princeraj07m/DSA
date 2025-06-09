// middle of a linked list
#include <iostream>
using namespace std;

struct Node {
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
    //Reverse a linked list 
        void reverse(){
            Node* prev = NULL;
            Node* curr = head;
            Node* next = NULL;
            while(curr != NULL){
                next = curr ->next;
                curr -> next = prev;
                prev = curr;
                curr = next; 
        }
        head = prev;
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
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);

    ll.printll();

    ll.reverse();
    
    ll.printll();

    return 0;
}