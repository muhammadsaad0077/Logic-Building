#include<iostream>
using namespace std;

struct Course{
    string title, courseCode, credHours;
};

struct Student{
    string name;
    int rollNo;
    int noOfCourse;
    Course *course;
};

void inputData(Student* student, int n){
    for(int i = 0; i < n; i++){
        cin>>student[i].name;
        cin>>student[i].rollNo;
        cin>>student[i].noOfCourse;
        student[i].course = new Course[student[i].noOfCourse];

        for(int j = 0; j < student[i].noOfCourse; j++){
            cin>>student[i].course[j].title;
            cin>>student[i].course[j].courseCode;
            cin>>student[i].course[j].credHours;
        }
    }
}

void printData(Student *student, int n){
    for(int i = 0; i < n; i++){
        cout<<student[i].name<<endl;
        cout<<student[i].rollNo<<endl;
        cout<<student[i].noOfCourse<<endl;

        for(int j = 0; j < student[i].noOfCourse; j++){
            cout<<student[i].course[j].title<<endl;
            cout<<student[i].course[j].courseCode<<endl;
            cout<<student[i].course[j].credHours<<endl;
        }
    }
}

void cleanData(Student* student, int n){
    for(int i = 0; i < n; i++){
        delete[] student[i].course;
    }

    delete[] student;
}

int main(){
    int n = 1;
    Student *student = new Student[n];
    inputData(student, n);
    printData(student, n);
    cleanData(student, n);

}