#include <iostream>
#include <string>

using namespace std;

// Defining a structure
struct Employee {
    int empID;
    string name;
    float salary;
};

// Function to display employee details
void displayEmployees(const Employee employees[], int size) {
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < size; i++) {
        cout << "Employee " << i + 1 << ":\n";
        cout << "ID: " << employees[i].empID << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Salary: $" << employees[i].salary << endl;
        cout << "---------------------------\n";
    }
}

int main() {
    int n;
    
    // Asking user for the number of employees
    cout << "Enter the number of employees: ";
    cin >> n;
    cin.ignore(); // To avoid issues with getline after cin

    Employee employees[n]; // Array of structures

    // Taking input for multiple employees
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        cout << "Enter Employee ID: ";
        cin >> employees[i].empID;
        cin.ignore(); // To handle newline character

        cout << "Enter Name: ";
        getline(cin, employees[i].name);

        cout << "Enter Salary: ";
        cin >> employees[i].salary;
    }

    // Displaying all employees' details
    displayEmployees(employees, n);

    return 0;
}
