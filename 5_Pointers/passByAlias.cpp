#include <iostream>
using namespace std;

void changeValue(int& a) {
    a = 20; // Change the value of a
}

int main() {
    int x = 10;
    changeValue(x);
    cout << x << endl;  // output : 20
    return 0;
}
// This code demonstrates passing by alias (reference) in C++.