#include <iostream>
using namespace std;

class Person {
public:
    string name;  // Attribute
    int age;      // Attribute

    // Method to introduce the person
    void introduce() {
        cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    Person p1;  // Creating an object

    // Assigning values to attributes
    p1.name = "Ali";
    p1.age = 25;

    // Calling the method
    p1.introduce();

    return 0;
}
