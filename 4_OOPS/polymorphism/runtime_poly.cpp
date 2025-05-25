//runtime polymorphism
#include <iostream>
using namespace std;

// Base class
class Animal {  
public:
    virtual void sound() { // Virtual function for runtime polymorphism
        cout << "Animal makes a sound." << endl;
    }
};
// Derived class
class Dog : public Animal {
public:
    void sound() override { // Override the base class function
        cout << "Dog barks." << endl;
    }
};
// Another derived class
class Cat : public Animal {
public:
    void sound() override { // Override the base class function
        cout << "Cat meows." << endl;
    }
};
// Function to demonstrate runtime polymorphism
void makeSound(Animal* animal) {
    animal->sound(); // Calls the appropriate sound function based on the object type
}
int main() {
    Animal* animal1 = new Dog(); // Create a Dog object
    Animal* animal2 = new Cat(); // Create a Cat object

    makeSound(animal1); // Calls Dog's sound function
    makeSound(animal2); // Calls Cat's sound function

    delete animal1; // Clean up memory
    delete animal2; // Clean up memory

    return 0;
}