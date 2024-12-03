// Code to print all subsrrsy of an array


#include <iostream>
using namespace std;

void print_subarray(int arr[],int size){
    for(int st=0; st<size;st++){
        for(int end = st; end<size; end++){
            for (int i = st; i <= end; i++)
            {
                cout<<arr[i];
            }
            
            cout<<" ";
        }
    cout<<endl;
    }
}

int main(){
    int n = 5;                            // Number of element in array
    int arr[5] = {1,2,3,4,5};             // Array   
    print_subarray(arr,n);                // Function call with array and array's size as arguments

}