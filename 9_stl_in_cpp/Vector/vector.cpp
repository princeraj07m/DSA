#include <iostream>
#include <vector>
using namespace std;


void display(vector<int> v){
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() {
    vector<int> v;
    
    
    v = {1,2,3,4,5};
    v.push_back(6);
    // size() and capacity()
    int size = v.size();    //6
    int capacity = v.capacity();    //10  // it gets doubled every time more required then size
    cout<<"size :"<<size<<" and capacity :"<<capacity<<endl;
 
    //v[2] and v.at(2) are same

    int f = v.front();
    int b = v.back();
    cout<<f<<" to "<<b<<endl;

    // display all element in vector 
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    //  copy vector 
    vector<int> v2(v);
    for(int i : v2){
        cout<<i<<" ";
    }
    cout<<endl;

    //v = {1,2,3,4,5,6}
    // erase method
    v.erase(v.begin());
    display(v);     // 2,3,4,5,6 

    v.erase(v.begin()+2, v.begin()+4);
    display(v);     // 2,3,6


    // insert method

    //clear method

    //empty method



    // iterators in vector
    vector<int>::iterator it;
    for(it = v2.begin(); it != v2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // reverse iterator
    for(auto it2 = v2.rbegin(); it2 != v2.rend();it2++){
        cout<<*it2<<" ";
    }
    cout<<endl;
}