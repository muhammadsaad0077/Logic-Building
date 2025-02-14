#include <iostream>
using namespace std;

int main() {
    int n;

    // User input for array size
    cout << "Enter the number of elements: ";
    cin >> n;

    // Check if the size is valid
    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    // Declare array and input elements
    int arr[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize largest and smallest with the first element
    int largest = arr[0];
    int smallest = arr[0];

    // Loop through the array to find largest and smallest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Display results
    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}
