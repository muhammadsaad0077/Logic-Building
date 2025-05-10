#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
};

void deleteStudent(Student arr[], int &n, int deleteId) {
    int index = -1;

    // Find index of the student to delete
    for (int i = 0; i < n; i++) {
        if (arr[i].id == deleteId) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Student not found!" << endl;
        return;
    }

    // Shift elements to the left
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Reduce size
    cout << "Student deleted successfully." << endl;
}

int main() {
    Student students[5] = {
        {1, "Ali"},
        {2, "Sara"},
        {3, "Ahmed"},
        {4, "Zara"},
        {5, "Hamza"}
    };
    int n = 5;

    deleteStudent(students, n, 3); // Delete student with ID 3

    // Show remaining students
    for (int i = 0; i < n; i++) {
        cout << students[i].id << " " << students[i].name << endl;
    }

    return 0;
}
