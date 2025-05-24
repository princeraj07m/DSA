#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;
    public:
        // Constructor
        Student(string n, int a) : name(n), age(a) {
            cout << "Constructor called for " << name << endl;
        }
        //copy constructor
        Student(Student &orgObject) : name(orgObject.name), age(orgObject.age) {
            cout << "Copy constructor called for " << name << endl;
        }
        // Destructor
        ~Student() {
            cout << "Destructor called for " << name << endl;
        }

        // Method to display student information
        void display() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

int main(){
    Student p1("Prince", 20);
    p1.display();


    return 0;
}