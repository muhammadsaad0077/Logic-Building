#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    Employee(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Employee ID: " << id << " Name: " << name << endl;
    }

    int getId() {
        return id;
    }
};

class Department {
private:
    string name;
    static const int MAX_EMPLOYEES = 100;
    Employee* employees[MAX_EMPLOYEES];
    int employeeCount;

public:
    Department(string n) {
        name = n;
        employeeCount = 0;
    }

    void assignEmployee(Employee* emp) {
        if (employeeCount < MAX_EMPLOYEES) {
            employees[employeeCount] = emp;
            employeeCount++;
        } else {
            cout << "Department is full Cannot assign more employees" << endl;
        }
    }

    void removeEmployee(int empId) {
        bool found = false;
        for (int i = 0; i < employeeCount; i++) {
            if (employees[i]->getId() == empId) {
                for (int j = i; j < employeeCount - 1; ++j) {
                    employees[j] = employees[j + 1];
                }
                employeeCount--;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Employee with ID " << empId << " not found in this department" << endl;
        }
    }

    void displayEmployees() const {
        cout << "Department: " << name << endl;
        if (employeeCount == 0) {
            cout << "No employees assigned" << endl;
        } else {
            for (int i = 0; i < employeeCount; ++i) {
                employees[i]->display();
            }
        }
    }

    ~Department() {
        cout << "Department " << name << " is being removed" << endl;
    }
};

int main() {
    Employee e1("Saad", 1);
    Employee e2("Ali", 43);
    Employee e3("Ahmad", 57);

    Department d1("HR");
    Department d2("IT");

    d1.assignEmployee(&e1);
    d1.assignEmployee(&e2);

    d2.assignEmployee(&e2);
    d2.assignEmployee(&e3);

    d1.displayEmployees();
    d2.displayEmployees();

    d1.removeEmployee(43);
    d1.displayEmployees();

    return 0;
}

