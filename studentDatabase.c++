#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int numSubjects;
    int *scores;
    float studentAverage;

public:
    Student() : numSubjects(0), scores(nullptr), studentAverage(0.0) {}
    
    void inputStudentData() {
        cout << "Enter Name of Student: ";
        cin >> name;
        
        cout << "Enter Number of Subjects: ";
        cin >> numSubjects;
        
        scores = new int[numSubjects];
        for (int i = 0; i < numSubjects; i++) {
            cout << "Enter Marks of Subject " << i + 1 << ": ";
            cin >> scores[i];
        }
        studentAverage = calculateAverage();
    }
    
    float calculateAverage() {
        float total = 0;
        for (int i = 0; i < numSubjects; i++) {
            total += scores[i];
        }
        return numSubjects > 0 ? total / numSubjects : 0;
    }
    
    void displayStudentData() const {
        cout << "Name: " << name << endl;
        cout << "Total Subjects: " << numSubjects << endl;
        for (int i = 0; i < numSubjects; i++) {
            cout << "Subject " << i + 1 << " Marks: " << scores[i] << endl;
        }
        cout << "Average Marks: " << studentAverage << endl;
    }
    
    float getAverage() const {
        return studentAverage;
    }
    
    string getName() const {
        return name;
    }
    
    int getNumSubjects() const {
        return numSubjects;
    }
    
    void cleanup() {
        delete[] scores;
    }
    
    static void sortStudents(Student *students, int numStudents) {
        for (int i = 0; i < numStudents - 1; i++) {
            for (int j = 0; j < numStudents - 1 - i; j++) {
                if (students[j].getAverage() < students[j + 1].getAverage()) {
                    swap(students[j], students[j + 1]);
                }
            }
        }

        cout << "\nStudent with Highest Average: " << endl;
        students[0].displayStudentData();
    }
};

int main() {
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    Student *students = new Student[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].inputStudentData();
    }
    
    cout << "\nStudent Data:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].displayStudentData();
        cout << "----------------------\n";
    }
    
    Student::sortStudents(students, numStudents);
    
    for (int i = 0; i < numStudents; i++) {
        students[i].cleanup();
    }
    
    delete[] students;
    return 0;
}
