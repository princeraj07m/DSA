//compile time polymorphism
#include <iostream>
using namespace std;
// Function overloading
void display(int x) {
    cout << "Display function with integer: " << x << endl;
}
void display(double x) {
    cout << "Display function with double: " << x << endl;
}
void display(string x) {
    cout << "Display function with string: " << x << endl;
}
// Operator overloading
class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r, double i) : real(r), imag(i) {}
        
        // Overloading the + operator
        Complex operator+(const Complex& other) {
            return Complex(real + other.real, imag + other.imag);
        }
        
        void display() {
            cout << "Complex number: " << real << " + " << imag << "i" << endl;
        }
};
// Function template
template <typename T>
void printArray(T arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    // Function overloading
    display(5);          // Calls display(int)
    display(3.14);      // Calls display(double)
    display("Hello");    // Calls display(string)

    // Operator overloading
    Complex c1(1.0, 2.0);
    Complex c2(3.0, 4.0);
    Complex c3 = c1 + c2; // Uses overloaded + operator
    c3.display();          // Displays the result

    // Function template
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3};
    
    printArray(intArray, 5);       // Prints integer array
    printArray(doubleArray, 3);    // Prints double array

    return 0;
}
// This code demonstrates compile-time polymorphism in C++ using function overloading, operator overloading, and function templates.
// It includes examples of each type of polymorphism, showcasing how C++ allows for multiple definitions of functions and operators based on different parameter types or templates.