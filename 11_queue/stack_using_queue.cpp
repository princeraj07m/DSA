#include <iostream>
#include <queue>
using namespace std;

class mystack{
public:
    queue<int> q1;
    queue<int> q2;

    mystack(){

    }
    void push(int val){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(val);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    int pop(){
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    int top(){
        return q1.front();
    }
    bool empty(){
        return q1.empty();
    }

};

int main() {
    mystack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl;  // Should be 30
    cout << "Pop: " << st.pop() << endl;  // Should pop 30
    cout << "Top: " << st.top() << endl;  // Should be 20
    cout << "Is Empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}