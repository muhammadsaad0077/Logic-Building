#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) // Base case
        return 0;
    return (n % 10) + sumOfDigits(n / 10); // Recursive call
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of digits of " << number << " is " << sumOfDigits(number) << endl;
    return 0;
}
