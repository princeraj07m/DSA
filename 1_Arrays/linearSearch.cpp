#include <iostream>
using namespace std;

int linear_search(int arr[],int size,int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int key;
    int size = 10;
    int arr[size] = {10,12,14,35,1,25,45,0,99,66};
    
    cout<<"Enter key you want to search in the array : "<<endl;
    cin>>key;

    int key_index = linear_search(arr,size,key);
    cout<<"Element is found at : "<<key_index<<endl;

    return 0;
}