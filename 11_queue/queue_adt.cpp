#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

class queue{
    Node* head;
    Node* tail;
public:
    queue(){
        head = tail = NULL;
    }
    
void push(int data){
    Node* newNode = new Node(data);
    if(empty()){
        head = tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}

void pop(){
    if(empty()){
        cout<<"QUEUE is empty "<<endl;
        return;
    }else{
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int front(){
    if(empty()){
        cout<<"QUEUE is empty "<<endl;
        return -1;
    }else{
        cout<<head->data<<endl;
    }
}
void display(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool empty(){
    return head==NULL;
}
};

int main(){
    queue q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.display();
    q.front();
    q.pop();
    q.front();
    return 0;
}
