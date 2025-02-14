#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int vowelCount = 0;

    // User input
    cout << "Enter a string: ";
    getline(cin, input);

    // Loop through each character
    for (char ch : input) {
        // Convert to lowercase to handle both uppercase and lowercase vowels
        ch = tolower(ch);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    // Display result
    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}
