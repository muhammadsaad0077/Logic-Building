#include <iostream>
#include <cmath>
using namespace std;

class PointTwo;

class PointOne {
private:
    int xCoord;
    int yCoord;

public:
    PointOne(int x, int y) {
        xCoord = x;
        yCoord = y;
    }

    friend double calculateDistance(PointOne p1, PointTwo p2);
};

class PointTwo {
private:
    int xCoord;
    int yCoord;

public:
    PointTwo(int x, int y) {
        xCoord = x;
        yCoord = y;
    }

    friend double calculateDistance(PointOne p1, PointTwo p2);
};

double calculateDistance(PointOne p1, PointTwo p2) {
    int diffX = p1.xCoord - p2.xCoord;
    int diffY = p1.yCoord - p2.yCoord;
    return sqrt(diffX * diffX + diffY * diffY);
}

int main() {
    PointOne point1(3, 4);
    PointTwo point2(0, 0);

    double result = calculateDistance(point1, point2);
    cout << "Distance between points: " << result << endl;

    return 0;
}

