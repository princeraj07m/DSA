#include <iostream>
using namespace std;

// polymorphism using constructor overloading
class Base {
public:
    Base() {
        cout << "Base class default constructor called." << endl;
    }
    
    Base(int x) {
        cout << "Base class parameterized constructor called with value: " << x << endl;
    }

    virtual void display() {
        cout << "Display function of Base class." << endl;
    }
};
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class default constructor called." << endl;
    }
    
    Derived(int x) : Base(x) {
        cout << "Derived class parameterized constructor called with value: " << x << endl;
    }

    void display() override {
        cout << "Display function of Derived class." << endl;
    }
};
int main() {
    Base b1; // Calls Base class default constructor
    b1.display(); // Calls Base class display function

    Derived d1; // Calls Derived class default constructor
    d1.display(); // Calls Derived class display function

    Base* b2 = new Derived(10); // Calls Base class parameterized constructor and Derived class parameterized constructor
    b2->display(); // Calls Derived class display function due to polymorphism

    delete b2; // Clean up memory
    return 0;
}
