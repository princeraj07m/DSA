#include <iostream>
using namespace std;


//  Array is a pointer poointing to the first element of the array

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr; // Pointer to the first element of the array

    cout<<arr+1<<" or "<<*(ptr+1)<<endl; // Output the address of the second element
    cout<<arr+2<<" or "<<*(ptr+2)<<endl; // Output the address of the third element
    cout<<arr+3<<" or "<<*(ptr+3)<<endl; // Output the address of the fourth element
    cout<<arr+4<<" or "<<*(ptr+4)<<endl; // Output the address of the fifth element


    cout << "Array elements using pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // Accessing elements using pointer arithmetic
    }
    cout << endl;

    cout << "Array elements using array notation:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "; // Accessing elements using array notation
    }
    cout << endl;

    return 0;
}