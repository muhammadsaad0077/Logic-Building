#include <iostream>
#include <cmath>
using namespace std;

void primeFactor(int);
bool isPrime(int);

int main() {
    int num;
    cout << "Enter a number to find its prime factors: ";
    cin >> num;
    primeFactor(num);
    return 0;
}

void primeFactor(int num) {
    cout << "The prime factors of " << num << " are: ";

    for (int i = 2; i <= num; i++) { // Include the number itself in the range
        while (num % i == 0 && isPrime(i)) { // Check if `i` is a factor and prime
            cout << i << " ";
            num /= i; // Reduce the number
        }
    }
    cout << endl;
}

bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than 2 are not prime
    if (num == 2) return true;  // 2 is a prime number
    for (int i = 2; i <= sqrt(num); i++) { // Check divisors up to sqrt(num)
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
