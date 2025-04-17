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
	Professor prof;
	Student* s;
	int studentCount;
};

struct University {
	Course *courses;
	int courseCount = 0;
};

University uni;

void addNewCourse(){
	int n;
	cout<<"Enter No of Courses ";
	cin>>n;
	
	Course *newCourse = new Course[uni.courseCount + n];
	
	for(int i = 0; i < uni.courseCount; i++){
		newCourse[i] = uni.courses[i];
	}
	
	delete[] uni.courses;
	
	uni.courses = newCourse;
	
	for(int i = uni.courseCount; i < uni.courseCount + n; i++){
		cout<<"Enter Course Name ";
		cin.ignore();
		getline(cin, uni.courses[i].courseName);
		cout<<"Enter Professor Name ";
		getline(cin, uni.courses[i].prof.name);
	}
	
	uni.courseCount += n;
	cout<<"Course Added Successfully";
	
}


int main(){
	
	int choice;
    cout << "Welcome to Course Management System\n";

    do {
        cout << "\n1: Add a New Course\n2: Enroll a Student\n3: Display All Courses and Students\n4: Update a Student's Grade\n5: Remove a Student from a Course\n6: Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: addNewCourse(); break;
//          case 2: enrollStudent(); break;
//          case 3: displayAllDetails(); break;
//          case 4: updateGrade(); break;
//          case 5: removeStudentCourse(); break;
//          case 6: cout << "Exiting...\n"; cleanup(); break;
            default: cout << "Enter Valid Choice!\n";
        }
    } while (choice != 6);
	
	return 0;
}
