#include <iostream>
using namespace std;

int length(char *);

int main() {
    char str[100];
    char str2[100];
    char str3[100];

    cout << "Enter a string (two words): ";
    cin.getline(str, 100);

    int count = 0;
    int count2 = 0;

    // Extract the first word into str2
    while (str[count] != ' ' && str[count] != '\0') {
        str2[count] = str[count];
        count++;
    }
    str2[count] = '\0'; // Null-terminate str2

    // Skip the space to find the second word
    if (str[count] == ' ') {
        count++;
    }

    // Extract the second word into str3
    while (str[count] != '\0') {
        str3[count2] = str[count];
        count++;
        count2++;
    }
    str3[count2] = '\0'; // Null-terminate str3

    // Compare lengths of the two strings
    int len1 = length(str2);
    int len2 = length(str3);

    if (len2 > len1) {
        cout << "The longest string is: " << str3 << endl;
    } else if (len1 > len2) {
        cout << "The longest string is: " << str2 << endl;
    } else {
        cout << "Both strings are of equal length." << endl;
    }

    return 0;
}

int length(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}



/*  -- Dynamic Strings  --


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MAX_STRINGS = 100; // Maximum number of strings
    const int MAX_LENGTH = 100;  // Maximum length of each string
    char strings[MAX_STRINGS][MAX_LENGTH]; // Static 2D array for strings

    int n;
    cout << "How many strings will you enter (up to " << MAX_STRINGS << ")? ";
    cin >> n;
    cin.ignore(); // To ignore the newline character left in the input buffer

    if (n > MAX_STRINGS) {
        cout << "Too many strings! Please restart the program.\n";
        return 1;
    }

    cout << "Enter your strings:\n";
    for (int i = 0; i < n; i++) {
        cout << "String " << i + 1 << ": ";
        cin.getline(strings[i], MAX_LENGTH);
    }

    // Find the longest string
    int longestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (strlen(strings[i]) > strlen(strings[longestIndex])) {
            longestIndex = i;
        }
    }

    cout << "\nThe longest string is: " << strings[longestIndex] << endl;

    return 0;
}







*/