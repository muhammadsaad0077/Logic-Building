#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    if (size == 0) 
        return 0;
    return arr[size - 1] + sumArray(arr, size - 1);
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

   
    int sum = sumArray(arr, size);
    
    
    int fact = factorial(size);

    
    cout << "Sum of array elements: " << sum << endl;
    cout << "Factorial of " << size << ": " << fact << endl;

    return 0;
}

