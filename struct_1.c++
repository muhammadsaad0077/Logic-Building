#include<iostream>
using namespace std;

struct Address{
    string city;
    string street;
};

struct Student{
    string name;
    string rollNo;
    Address* address;
};

void inputData(Student *student, int n){
    for(int i = 0; i < n; i++){
        cin>>student[i].name;
        cin>>student[i].rollNo;
        student[i].address = new Address;
        cin>>student[i].address->city;
        cin>>student[i].address->street;
    }
}

void printData(Student *student, int n){
    for(int i = 0; i < n; i++){
        cout<<student[i].name<<endl;
        cout<<student[i].rollNo<<endl;
        cout<<student[i].address->city<<endl;
        cout<<student[i].address->street<<endl;
    }
}

void cleanData(Student *student, int n){
    for(int i = 0; i < n; i++){
        delete student[i].address;
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