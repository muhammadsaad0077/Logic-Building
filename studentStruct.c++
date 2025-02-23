#include <iostream>
#include <string>

using namespace std;

// Defining a structure
struct Student {
    string name;
    int rollNumber;
    float marks;
};

// Function to display student details
void displayStudent(const Student &s) {
    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s1; // Declare a structure variable

    // Taking input
    cout << "Enter Student Name: ";
    getline(cin, s1.name);

    cout << "Enter Roll Number: ";
    cin >> s1.rollNumber;

    cout << "Enter Marks: ";
    cin >> s1.marks;

    // Display student details
    displayStudent(s1);

    return 0;
}
