#include <iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int rollNo;
    int marks[3][3];
    int index = 0;
    float totalMarks = 0;
    float average[3];
    
    void studentData(int index){
        index = index;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter RollNo: ";
        cin>>rollNo;
        
        for(int i = 0; i < 3; i++){
            cout<<"Enter marks for "<<i+1<<" Subject "<<endl;
            cin>>marks[index][i];
            totalMarks += marks[index][i];
        }
        
        average[index] = totalMarks / 3;
    }
    
    void displayData(int index){
        index = index;
        cout<<"Name: "<<name<<endl;
        cout<<"RollNo "<<rollNo<<endl;
        
        for(int i = 0; i < 3; i++){
            cout<<"Marks of Subject "<<i+1<<" "<<marks[index][i]<<endl;
        }
        
        cout<<"Average: "<<average[index]<<endl;
    }
};

int main() {
    int totalStudents = 3;
    Student student[totalStudents];
    
    for(int i = 0; i < totalStudents; i++){
        student[i].studentData(i);
    }
    
    for(int i = 0; i < totalStudents; i++){
        student[i].displayData(i);
    }
    

    return 0;
}