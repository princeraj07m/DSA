#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // char str[10];
    // cout << "Enter your String:"<<endl;
    // Note: cin will stop reading at the first whitespace
    // cin >> str;
    // cout << str << endl;

    // To read a full line including spaces, use:
    // cin.getline(str, 100);
    char str2[10];
    cout << "Enter your String:"<<endl;
    cin.getline(str2, 10);
    cout << str2 << endl;
    cout << "Length of the string using strlen: " << strlen(str2) << endl;   
    
    // calculate length of string using a loop
    int length = 0;
    while (str2[length] != '\0') {
        length++;
    }
    cout << "Length of the string using loop: " << length << endl;

    return 0;
}