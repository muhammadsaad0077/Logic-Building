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


const int maxStudent = 10;
const int totalSubjects = 3;

char studentName[maxStudent][50];
int studentRollNo[maxStudent];
int studentMarks[maxStudent][totalSubjects];
int totalStudent = 0;



void addNewStudent();
void displayAllStudent();
void averageMarks();
void highestMarksStudent();

int main(){

    int choice;

    do{
        cout<<"\n\n\t\tWelcome to Student Portal"<<endl;
        cout<<"\t1: Add new Student Records"<<endl;
        cout<<"\t2: Check all Student Records"<<endl;
        cout<<"\t3: Check Average Marks of each Student"<<endl;
        cout<<"\t4: Highest Student Marks"<<endl;
        cout<<"\t5: Exit from Portal"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            addNewStudent();
            break;

            case 2:
            displayAllStudent();
            break;

            case 3:
            averageMarks();
            break;

            case 4:
            highestMarksStudent();
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

    cout<<"Enter marks for the 3 subjects: "<<endl;
    for(int i = 0; i < totalSubjects; i++){
        cout<<"Enter marks of Subject "<<i+1<<endl;
        cin>>studentMarks[totalStudent][i];
    }

    

    totalStudent++;

    cout<<"\n\nStudent Added Sucessfully";


}

void displayAllStudent(){

    if(totalStudent == 0){
        cout<<"No Student Found ";
    }

    else{

        for(int i = 0; i < totalStudent; i++){
            cout<<"Name "<<endl;
            cout<<studentName[i]<<endl;
            cout<<"Roll No "<<endl;
            cout<<studentRollNo[i]<<endl;
          for(int j = 0; j < totalSubjects; j++){
            cout<<"\nSubjects Marks "<<endl;
            cout<<studentMarks[i][j]<<endl;
          }      

        }


    }


}

void averageMarks(){

    float averageMarks;
    float finalAverageMarks;

    for(int i = 0; i < totalStudent; i++){
        averageMarks = 0;

        for(int j = 0; j < totalSubjects; j++){
            averageMarks += studentMarks[i][j];
        }

        finalAverageMarks = averageMarks / 3;

        cout<<"The Average Marks of "<<studentName[i]<<" is "<<finalAverageMarks<<endl;

    }

}

void highestMarksStudent(){
    int maxStudent;
    int index = 0;

    maxStudent = studentMarks[0][0];

    for(int i = 0; i < totalStudent; i++){
        for(int j = 0; j < totalSubjects; j++){
            if(studentMarks[i][j] > maxStudent){
                maxStudent = studentMarks[i][j];
                index = i;              
            }
        }
    }

    cout<<"Highest Student Marks is "<<maxStudent<<" and is "<<studentName[index];

}