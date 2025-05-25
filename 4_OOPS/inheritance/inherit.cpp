#include <iostream>
using namespace std;
class Base {
    public:
        Base() {
            cout << "Base class constructor called." << endl;
        }
        // Distructor
        ~Base() {
            cout << "Base class destructor called." << endl;
        }

        void display() {
            cout << "Display function of Base class." << endl;
        }
};  
class Derived : public Base {
    public:
        Derived() {
            cout << "Derived class constructor called." << endl;
        }
        // Destructor
        ~Derived() {
            cout << "Derived class destructor called." << endl;
        }
        void display() {
            cout << "Display function of Derived class." << endl;
        }
        void callBaseDisplay() {
            Base::display(); // Calling the base class display function
        }
        void callBaseConstructor() {
            Base b; // Creating an object of the base class
        }
};
int main() {
    Derived d; // Creating an object of the derived class
   

    return 0;
}