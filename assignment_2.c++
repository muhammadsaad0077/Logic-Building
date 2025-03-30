#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    int roll;
    string grade;
};

struct Professor {
    string name;
    int age;
    string subject;
};

struct Course {
    string courseName;
    string courseCode;
    Professor prof;
    Student* students; 
    int studentCount;

    Course(){
		students = NULL;
		studentCount = 0;
	}
};

struct University {
    string uniName;
    Course* courses; 
    int courseCount;

    University(){
		courses = NULL;
		courseCount = 0;
	} 
};

University uni;

void addNewCourse() {
    cout << "Enter number of courses to add: ";
    int n;
    cin >> n;

    Course* newCourses = new Course[uni.courseCount + n]; 

    for (int i = 0; i < uni.courseCount; i++) {
        newCourses[i] = uni.courses[i];
    }

    delete[] uni.courses; 
    uni.courses = newCourses;

    for (int i = uni.courseCount; i < uni.courseCount + n; i++) {
        cout << "Enter Course Name: ";
        cin.ignore();
        getline(cin, uni.courses[i].courseName);

        cout << "Enter Course Code: ";
        cin >> uni.courses[i].courseCode;

        cout << "Enter Professor Name: ";
        cin.ignore();
        getline(cin, uni.courses[i].prof.name);

        cout << "Enter Professor Age: ";
        cin >> uni.courses[i].prof.age;

        cout << "Enter Professor's Subject: ";
        cin.ignore();
        getline(cin, uni.courses[i].prof.subject);

        uni.courses[i].students = NULL; 
        uni.courses[i].studentCount = 0;
    }

    uni.courseCount += n;
    cout << "Course(s) added successfully!" << endl;
}

void enrollStudent() {
    if (uni.courseCount == 0) {
        cout << "No courses available!" << endl;
        return;
    }

    cout << "Select a course to enroll in:\n";
    for (int i = 0; i < uni.courseCount; i++) {
        cout << i + 1 << ": " << uni.courses[i].courseName << " (" << uni.courses[i].courseCode << ")\n";
    }

    int courseIndex;
    cout << "Enter course number: ";
    cin >> courseIndex;
    if (courseIndex < 1 || courseIndex > uni.courseCount) {
        cout << "Invalid selection!" << endl;
        return;
    }

    Course* c = &uni.courses[courseIndex - 1];

    Student* newStudents = new Student[c->studentCount + 1];

    for (int i = 0; i < c->studentCount; i++) {
        newStudents[i] = c->students[i];
    }

    delete[] c->students; 
    c->students = newStudents;

    Student* s = &c->students[c->studentCount];
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, s->name);

    cout << "Enter Student Age: ";
    cin >> s->age;

    cout << "Enter Student Roll Number: ";
    cin >> s->roll;

    cout << "Enter Student Grade: ";
    cin >> s->grade;

    c->studentCount++;
    cout << "Student enrolled successfully!" << endl;
}

void displayAllDetails() {
    if (uni.courseCount == 0) {
        cout << "No courses available!" << endl;
        return;
    }

    for (int i = 0; i < uni.courseCount; i++) {
        Course* c = &uni.courses[i];
        cout << "\n----------------------------------\n";
        cout << "Course: " << c->courseName << " (" << c->courseCode << ")\n";
        cout << "Professor: " << c->prof.name << " (Age: " << c->prof.age << ", Subject: " << c->prof.subject << ")\n";
        cout << "Students Enrolled: " << c->studentCount << "\n";

        for (int j = 0; j < c->studentCount; j++) {
            Student* s = &c->students[j];
            cout << "  - " << s->name << " (Roll: " << s->roll << ", Age: " << s->age << ", Grade: " << s->grade << ")\n";
        }
    }
}

void updateGrade() {
    displayAllDetails();
    cout << "\nSelect a course number: ";
    int courseIndex;
    cin >> courseIndex;

    if (courseIndex < 1 || courseIndex > uni.courseCount) {
        cout << "Invalid selection!" << endl;
        return;
    }

    Course* c = &uni.courses[courseIndex - 1];

    cout << "Select a student number: ";
    int studentIndex;
    cin >> studentIndex;

    if (studentIndex < 1 || studentIndex > c->studentCount) {
        cout << "Invalid selection!" << endl;
        return;
    }

    cout << "Enter new grade: ";
    cin >> c->students[studentIndex - 1].grade;

    cout << "Grade updated successfully!" << endl;
}

void removeStudentCourse() {
    displayAllDetails();
    cout << "\nSelect a course number: ";
    int courseIndex;
    cin >> courseIndex;

    if (courseIndex < 1 || courseIndex > uni.courseCount) {
        cout << "Invalid selection!" << endl;
        return;
    }

    Course* c = &uni.courses[courseIndex - 1];

    cout << "Select a student number to remove: ";
    int studentIndex;
    cin >> studentIndex;

    if (studentIndex < 1 || studentIndex > c->studentCount) {
        cout << "Invalid selection!" << endl;
        return;
    }

    Student* newStudents = new Student[c->studentCount - 1]; 

    for (int j = 0, k = 0; j < c->studentCount; j++) {
        if (j != studentIndex - 1) {
            newStudents[k++] = c->students[j];
        }
    }

    delete[] c->students; 
    c->students = newStudents;
    c->studentCount--;

    cout << "Student removed successfully!" << endl;
}

void cleanup() {
    for (int i = 0; i < uni.courseCount; i++) {
        delete[] uni.courses[i].students;
    }
    delete[] uni.courses;
}

int main() {
    int choice;
    cout << "Welcome to Course Management System\n";

    do {
        cout << "\n1: Add a New Course\n2: Enroll a Student\n3: Display All Courses and Students\n4: Update a Student's Grade\n5: Remove a Student from a Course\n6: Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: addNewCourse(); break;
            case 2: enrollStudent(); break;
            case 3: displayAllDetails(); break;
            case 4: updateGrade(); break;
            case 5: removeStudentCourse(); break;
            case 6: cout << "Exiting...\n"; cleanup(); break;
            default: cout << "Enter Valid Choice!\n";
        }
    } while (choice != 6);

    return 0;
}
