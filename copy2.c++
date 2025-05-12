#include <iostream>
using namespace std;

class Deep {
public:
    int* data;

    Deep(int value) {
        data = new int;
        *data = value;
    }

    // Deep Copy Constructor
    Deep(Deep& source) {
        data = new int(*source.data);  // Creating new memory and copying value
    }

    void display() {
        cout << "Value: " << *data << ", Address: " << data << endl;
    }

    ~Deep() {
        delete data;
    }
};

int main() {
    Deep obj1(10);
    Deep obj2(obj1);

    cout << "Before change:\n";
    obj1.display();
    obj2.display();

    *obj2.data = 20;  // Change through obj2

    cout << "\nAfter change:\n";
    obj1.display();
    obj2.display();

    return 0;
}
