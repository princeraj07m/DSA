#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[6] = {5,15,22,1,-15,24};
    int smallest = INT_MAX,largest = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        // if(arr[i] > max){
        //     max = arr[i];
        // }
        largest = max(arr[i],largest);

        // if(arr[i] < min){
        //     min = arr[i];
        // }
        smallest = min(arr[i],smallest);
    }
    
    cout<<" Max element is : "<< largest <<endl;
    cout<<" Min element is : "<< smallest <<endl;

    
    return 0;
}