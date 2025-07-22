#include <iostream>
#include <vector>
#include <list>
using namespace std;

void display(list<int> l){
    for (int x : l)
        cout << x << " ";
    cout<<endl;
}

int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(4);
    l.push_front(0);
    display(l);

    auto it = l.begin();
    advance(it, 3);
    l.insert(it, 3);
    display(l);
    l.reverse();
    display(l);
    l.sort();
    display(l);

    l.pop_back();
    l.pop_front();
    l.remove(1);
    auto it2 = l.begin();
    l.erase(it2);
    display(l);

    cout<<"list is empty : "<<l.empty()<<endl;
    l.clear();
    cout<<"list is empty : "<<l.empty()<<endl;






    return 0;
}
