//Methods to initialise a vector : 
// vector<int> num;
// vector<int> num = { vgalue1,value2,............};
//vector<int> num(3,0);



#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> num1(5,0); //initialising a vector
    vector <int> num = {1,2,3};
    //methods of vector

    cout<<"size of vector is "<< num.size() <<endl;

    num.push_back(4);
    
    cout<<"size of vector is "<< num.size() <<endl;
    cout<<"capacity of vector is "<< num.capacity() <<endl;
    num.pop_back();

    cout<<"First elememt is : "<< num.front()<<endl;

    cout<<"Element at second index is : "<< num.at(2) <<endl;

    cout<<"size of vector is "<< num.size() <<endl;
    cout<<"Capacity of vector is "<< num.capacity() <<endl;

    cout<<"Element of vector are :"<<endl;
    for(int i : num){
        i = i*2;
    }
    for(int i : num){
        cout<<i<<endl;
    }

    return 0;
}