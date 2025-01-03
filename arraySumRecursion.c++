#include <iostream>
using namespace std;

int arrSum(int *arr, int size) {
    if (size == 0) { // Base case: when size is 0, return 0
        return 0;
    }

    // Recursive case: add the first element and recurse for the rest
    return arr[0] + arrSum(arr + 1, size - 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5; // Correct size of the array

    cout << "Sum of array elements: " << arrSum(arr, size) << endl;

    return 0;
}
