#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int rollNo, marks;
};


int main() {
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    Student *std = new Student[n];
    
    for(int i = 0; i < n; i++){
        cout<<"Enter Name: "<<endl;
        cin>>std[i].name;
        cout<<"Enter RollNo: "<<endl;
        cin>>std[i].rollNo;
        cout<<"Enter Marks: "<<endl;
        cin>>std[i].marks;
    }
    
    for(int i = 0; i < n; i++){
        cout<<"Name: "<<std[i].name<<endl;
       
        cout<<"RollNo: "<<std[i].rollNo<<endl;
       
        cout<<"Marks: "<<std[i].marks<<endl;
        
    }

    delete[] std;
    
    return 0;
}


