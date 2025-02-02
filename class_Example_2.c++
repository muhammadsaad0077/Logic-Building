#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int modelYear;

    // Constructor
    Car(string b, int y) {
        brand = b;
        modelYear = y;
    }

    void display() {
        cout << "Car Brand: " << brand << endl;
        cout << "Model Year: " << modelYear << endl;
    }
};

int main() {
    Car myCar("Honda", 2021);  // Object created with constructor
    myCar.display();

    return 0;
}
