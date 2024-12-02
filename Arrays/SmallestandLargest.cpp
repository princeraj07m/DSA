#include <iostream>
using namespace std;

int main(){
    int arr[6] = {5,15,22,1,-15,24};
    int min = arr[1],max = arr[1];

    for (int i = 0; i < 6; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    cout<<" Max element is : "<< max <<endl;
    cout<<" Min element is : "<< min <<endl;

    
    return 0;
}