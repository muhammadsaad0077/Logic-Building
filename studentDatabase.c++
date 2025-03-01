#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    int marks[3]; 
    float totalMarks;
    float average;

    void studentData(int idx) {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter RollNo: ";
        cin >> rollNo;
        
        totalMarks = 0;
        
        for(int i = 0; i < 3; i++) {
            cout << "Enter marks for Subject " << i+1 << ": ";
            cin >> marks[i];
            totalMarks += marks[i];
        }

        average = totalMarks / 3.0;
    }
    
    void displayData() {
        cout << "Name: " << name << endl;
        cout<< "Roll No: " << rollNo << endl;
        cout << "Marks: ";
        for(int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << "Average Marks: " << average << endl;
    }
};

void topStudent(Student students[], int totalStudents) {
    int topIndex = 0;
    for(int i = 1; i < totalStudents; i++) {
        if(students[i].average > students[topIndex].average) {
            topIndex = i;
        }
    }
    
    cout << "Top Student: ";
    students[topIndex].displayData();
}

int main() {
    int totalStudents = 3;
    Student students[totalStudents];

    for(int i = 0; i < totalStudents; i++) {
        students[i].studentData(i);
    }

    cout << "All Student Records: ";
    for(int i = 0; i < totalStudents; i++) {
        students[i].displayData();
    }

    topStudent(students, totalStudents);

    return 0;
}
