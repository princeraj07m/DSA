// Code to print all subsrrsy of an array


#include <iostream>
using namespace std;

int max_subarraysum(int arr[],int size){
    int sum;
    for(int st=0; st<size;st++){
        int cursum =0;
        for(int end = st; end<size; end++){
            cursum += arr[end];
            sum = max(cursum,sum);
            cout<<" ";
        }
    }
    return sum;
}

int main(){
    int n = 5;                          // Number of element in array
    int arr[5] = {1,2,3,4,5};           // Array   
    cout<< "Maximum subarray sum = "<<max_subarraysum(arr,n);    // Function call with array and array's size as arguments

}