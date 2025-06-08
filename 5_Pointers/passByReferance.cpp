#include <iostream>
using namespace std;

void changeValue(int* a) {
    *a = 20; // Change the value of a
}

int main() {
    int x = 10;
    int* ptr = &x; // Pointer to x

    changeValue(ptr); // Pass pointer to function
    cout << x << endl;  // output : 20
    return 0;
}