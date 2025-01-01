//Methods to initialise a vector : 
// vector<int> vec;
// vector<int> vec = { vgalue1,value2,............};
//vector<int> vec(3,0);



#include <iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {1,2,3};
    //methods of vector

    cout<<"size of vector is "<< vec.size() <<endl;

    vec.push_back(4);
    
    cout<<"size of vector is "<< vec.size() <<endl;
    
    vec.pop_item();

    cout<<"First elememt is : "<<vec.front()<<endl;

    cout<<"Element at second index is : "<< vec.at(2) <<endl;

    cout<<"size of vector is "<< vec.size() <<endl;
    cout<<"Capacity of vector is "<< vec.capacity() <<endl;

    cout<<"Element of vector are :"<<endl;
    for(int i : vec){
        i = i*2;
    }
    for(int i : vec){
        cout<<i<<endl;
    }

    return 0;
}