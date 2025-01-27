/*

You are tasked with creating a program to manage a small student database for a
school. The school wants to store the following information about each student:
● Name
● Roll Number
● Marks in 3 subjects
The system should perform the following tasks:
1. Add new student records.
2. Display all student records.

3. Calculate and display the average marks of each student.
4. Find the student with the highest total marks.
Procedure: Solving with Procedural Programming
Step 1: Break Down the Problem
● Use arrays to store student information.
○ A 2D array for marks (e.g., marks[10][3] for 10 students and 3
subjects).
○ Separate arrays for names and roll numbers.
● Use functions to:
○ Input and store student data.
○ Calculate averages.
○ Find the student with the highest total marks.
● Iterate through the arrays for all operations.

*/

#include<iostream>
using namespace std;


const int maxStudent = 100;
char studentName[maxStudent];
int studentRollNo[maxStudent];
int totalStudent = 0;



void addNewStudent();

int main(){

    int choice;

    do{
        cout<<"\t\tWelcome to Student Portal"<<endl;
        cout<<"\t\1: Add new Student Records"<<endl;
        cout<<"\t\2: Check all Student Records"<<endl;
        cout<<"\t\3: Check Average Marks of each Student"<<endl;
        cout<<"\t\4: Highest Student Marks"<<endl;
        cout<<"\t\5: Exit from Portal"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            addNewStudent();
            break;
        }
    }
    while(choice != 5);



}

void addNewStudent(){

    cout<<"Enter Your Name ";
    cin.ignore();
    cin.getline(studentName[totalStudent], 50);

    cout<<"Enter Your Roll No ";
    cin >> studentRollNo[totalStudent];


}