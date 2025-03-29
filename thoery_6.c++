#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string* name;  // Pointer to dynamically allocated string

    // Default constructor
    Person() {
        name = new string("");  // Allocate empty string
    }

    // Parameterized constructor
    Person(string n) {
        name = new string(n);  // Allocate memory and store value
    }

    // **Deep Copy Constructor**
    Person(const Person& p) {
        name = new string(*p.name);  // Allocate new memory and copy value
    }

    // **Deep Copy Assignment Operator**
    Person& operator=(const Person& p) {
        if (this != &p) {  // Prevent self-assignment
            delete name;  // Free existing memory to avoid leaks
            name = new string(*p.name);  // Allocate new memory and copy value
        }
        return *this;
    }

    // Destructor
    ~Person() {
        delete name;  // Free allocated memory
    }
};

int main() {
    Person p("Saad");
    Person p2(p);  // Calls deep copy constructor

    cout << "Before Assignment: " << endl;
    cout << "p.name = " << *p.name << endl;
    cout << "p2.name = " << *p2.name << endl;

    p2 = p;  // Calls deep copy assignment operator

    cout << "\nAfter Assignment: " << endl;
    cout << "p.name = " << *p.name << endl;
    cout << "p2.name = " << *p2.name << endl;

    return 0;
}
