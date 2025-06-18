#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    // Reverse the string
    string reversed = string(str.rbegin(), str.rend());
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
