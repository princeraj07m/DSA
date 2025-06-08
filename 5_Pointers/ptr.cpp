#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    cout<<ptr<<" is same as "<<&a<<endl;  // output : ptr and adress of a 

    int** ptr2 = &ptr;
    cout<<ptr2<<" is same as "<<&ptr<<endl;   // output : ptr2 and adress of ptr 

    cout<<*ptr<<endl;      // output : 10
    cout<<**ptr2<<endl;    // output : 10
    cout<<*ptr2<<endl;     // output : address of ptr

    // Null pointer
    int* nullPtr = NULL;  // C++11 onwards
    if (nullPtr == nullptr) {
        cout << "nullPtr is a null pointer." << endl;  // output : nullPtr is a null pointer.
    } else {
        cout << "nullPtr is not a null pointer." << endl;
    }

}