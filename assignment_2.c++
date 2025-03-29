#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
    int roll;
    string grade;
};

struct Professor{
    string name;
    int age;
    string subject;
};

struct Course{
    string courseName;
    string courseCode;
    Student std[1];
    Professor prof[1];        
};

struct University{
    string uniName;
    Course crs[1];

};

void addNewCourse(){
    Course c;
    cout<<"Enter Subject Name: ";
    cin>>c.courseName;
    cout<<"Enter Subject Code: ";
    cin>>c.courseCode;

    cout<<"Enter Subject's Professor Name: ";
    cin>>c.prof[1].name;
    cout<<"Enter Subject's Professor Age: ";
    cin>>c.prof[1].age;
    cout<<"Enter Subject's Professor Specialization: ";
    cin>>c.prof[1].subject;

    cout<<"Enrolling Student for this Subject...."<<endl<<endl;

    cout<<"Enter Student Name: ";
    cin>>c.std[1].name;

    cout<<"Enter Student Age: ";
    cin>>c.std[1].age;

    cout<<"Enter Student Grade: ";
    cin>>c.std[1].grade;
     

}

void enrollStudent(){
    Student s;
    cout<<"Enter Student Name: ";
    s.name;
    cout<<"Enter Student Age: ";
    s.age;   
    cout<<"Enter Student Grade: ";
    s.grade;
    
}

void displayAllDetails(){
    
}

void updateGrade(){
    
}

void removeStudentCourse(){
    
}

int main(){
    int choice;
    cout<<"Welcome to Course Management System"<<endl;

    do{
        cout<<"1: Add a New Course"<<endl;
        cout<<"2: Enroll a Student"<<endl;
        cout<<"3: Display All Courses and Students"<<endl;
        cout<<"4: Update a Student's Grade"<<endl;
        cout<<"5: Remove a Student from a Course"<<endl;
        cout<<"6: Exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            addNewCourse();
            break;

            case 2:
            enrollStudent();
            break;

            case 3:
            displayAllDetails();
            break;

            case 4:
            updateGrade();
            break;

            case 5:
            removeStudentCourse();
            break;

            default:
            cout<<"Enter Valid Choice! "<<endl;
        }
    }
    while(choice != 6);
    

}


/*
1. Use Nested Structures:
    ○ University contains an array of Course structures.
    ○ Course contains an array of Student structures and a Professor structure.
    ○ Professor contains personal and subject details.
    ○ Student contains personal details and grades.



2. Use Functions:
    ○ Implement functions to:
    ■ Add a new course 
    ■ Enroll a student in a course (update student list).
    ■ Display all courses and students.
    ■ Update a student's grade.
    ■ Remove a student from a course (shift students in memory).


*/