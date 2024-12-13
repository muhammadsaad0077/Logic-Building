#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    const int n = 10; // Number of points
    double x[n], y[n]; // Arrays to store the coordinates

    // Input: Enter the X and Y coordinates
    cout << "Enter the coordinates of 10 points (x and y):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Point " << i + 1 << " (x, y): ";
        cin >> x[i] >> y[i];
    }

    // Calculate the total distance
    double totalDistance = 0;
    for (int i = 0; i < n - 1; i++) {
        totalDistance += calculateDistance(x[i], y[i], x[i + 1], y[i + 1]);
    }

    // Output the result
    cout << "Total distance from the first point to the last point: " << totalDistance << endl;

    return 0;
}
