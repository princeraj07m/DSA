#include <iostream>
using namespace std;

class circularqueque{
public:
    int* arr;
    int frontIndex;
    int rear;
    int currsize = 0;
    int capacity;
    circularqueque(int size){
        capacity = size;
        arr = new int[capacity];
        frontIndex = 0;
        rear = -1;
    }
    void push(int val){
        if(currsize>=capacity){
            cout<<"queue full"<<endl;
            return;
        }
        rear = (rear+1)%capacity;
        arr[rear] = val;
        currsize++;
        cout<<"inserted "<<arr[rear]<< " in queue"<<endl;
    }

    void pop(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        frontIndex = (frontIndex + 1) % capacity;
        currsize--;
        cout<<"pop()"<<endl;
    }

    bool empty(){
        return currsize == 0;
    }

    int front(){
         if (empty()) {
        cout << "Queue is empty" << endl;
        return -1;
    }
        cout <<"front element is "<< arr[frontIndex] << endl;
        return arr[frontIndex];
    }
};
int main(){
    circularqueque c(5);
    c.push(1);
    c.push(2);
    c.push(3);
    c.push(4);
    c.push(5);

    c.front(); //1
    c.pop();
    c.front(); //2
    c.pop();
    c.front(); //3
    c.pop();
    c.front(); //4
    c.pop();
    c.front(); //5
    c.pop();
    c.front();
}