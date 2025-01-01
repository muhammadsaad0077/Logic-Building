#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    cout<<"The function is called with n = "<<n<<endl;
    if (n == 0 || n == 1) { // Base case
        return 1;
    } else { // Recursive case
    cout<<"The value of n is "<<n<<endl;
        return n * factorial(n - 1);
     
    }
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout<<endl<< "Factorial of " << number << " is " << factorial(number) << endl;
    }

    return 0;
}
