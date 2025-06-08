#include <iostream>
using namespace std;

//Pointer arithmatic :: subtraction and comparision 
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr1 = &arr[0]; // Pointer to the first element
    int* ptr2 = &arr[4]; // Pointer to the last element

    cout << "Pointer arithmetic:" << endl;
    cout << "ptr2 - ptr1: " << (ptr2 - ptr1) << endl; // Output: 4 (number of elements between ptr1 and ptr2)
    
    // Comparing pointers
    if (ptr1 < ptr2) {
        cout << "ptr1 points to an earlier element than ptr2." << endl;
    } else {
        cout << "ptr1 does not point to an earlier element than ptr2." << endl;
    }

    return 0;
}
