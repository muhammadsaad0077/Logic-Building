#include <iostream>
using namespace std;

class Breadth;

class Height {
private:
    int heightValue;

public:
    Height(int h) {
        heightValue = h;
    }

    friend int calculateArea(Height h, Breadth b);
};

class Breadth {
private:
    int breadthValue;

public:
    Breadth(int b) {
        breadthValue = b;
    }

    friend int calculateArea(Height h, Breadth b);
};

int calculateArea(Height h, Breadth b) {
    return h.heightValue * b.breadthValue;
}

int main() {
    Height h(10);
    Breadth b(5);

    int area = calculateArea(h, b);
    cout << "Area: " << area << endl;

    return 0;
}

