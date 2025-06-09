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

        // Push in middle of linked list
        void insert_middle(int val , int pos){
            Node* newNode = new Node(val);
            if(pos < 0){
                return;
            }else if(pos == 0){
                push_front(val);
                return;
            }
            Node* temp = head;
            for(int i=0; i<pos-1;i++){
                if(temp == NULL){
                    cout<<"invalid position"<<endl;
                    return;
                }
                temp = temp->next;
            }
            newNode -> next = temp->next;
            temp -> next = newNode;
            
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
                while ( temp ->next ->next != NULL)
                {
                    temp = temp -> next;
                }
                temp->next = NULL;
                delete tail;
                tail = temp;
            }
        }

        // Search in linked list
        void search(int val){
            Node* temp = head;
            int pos = 1;
                while(temp != NULL){
                    if(temp -> data == val){
                        cout<<pos;
                        return;
                    }
                    temp = temp->next;
                    pos++;
                }
                if(pos == 0){
                    cout <<"element not found "<<endl;
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
    ll.search(1);  // search for element in linked list

    return 0;
}