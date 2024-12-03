#include <iostream>
using namespace std;

int reverse_array(int arr[],int size){
    int left = 0,right = size-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

int main(){
    int key;
    int size = 10;
    int arr[size] = {10,12,14,35,1,25,45,0,99,66};
    cout<<"Original array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
        }
    cout<<endl;
    reverse_array(arr,size);
    
    cout<<"Reversed array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
        }


    return 0;
}