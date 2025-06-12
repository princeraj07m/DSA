#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str1 = "Hello, World!";
    cout << "Original string: " << str1 << endl;

    //input using cin without spaces
    // cout << "Enter a new string: ";
    // getline(cin, str1);
    // cout << "Updated string: " << str1 << endl;

    // input with spaces
    // cout << "Enter a new string with spaces: ";
    // getline(cin, str1);
    // cout << "Updated string: " << str1 << endl;

    // Get the length of the string
    cout << "Length of the string: " << str1.length() << endl;

    // Get a substring
    string sub = str1.substr(0, 5);
    cout << "Substring (0, 5): " << sub << endl;

    // Concatenate strings
    string str2 = " How are you?";
    string result = str1 + str2;
    cout << "Concatenated string: " << result << endl;

    // Convert to uppercase
    for (char &c : str1) {
        c = toupper(c);
    }
    cout << "Uppercase string: " << str1 << endl;
    // Convert to lowercase
    for (char &c : str1) {
        c = tolower(c);
    }
    cout << "Lowercase string: " << str1 << endl;

    // Reverse the string
    string reversed = string(str1.rbegin(), str1.rend());
    cout << "Reversed string: " << reversed << endl;

    // Replace a substring
    size_t pos = str1.find("World");
    if (pos != string::npos) {
        str1.replace(pos, 5, "C++");
    }
    cout << "String after replacement: " << str1 << endl;

    // Check if the string is empty
    if (str1.empty()) {
        cout << "String is empty." << endl;
    } else {
        cout << "String is not empty." << endl;
    }

    // Compare two strings
    string str3 = "Hello, C++!";
    if (str1 == str3) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    // Find a SUBSTRING IN a string AND ERASE IT
    




























    return 0;
}