include<iostream>
#include<string>
using namespace std;

struct Student{
    string name;
    int age;
    int roll;
};

struct Professor{
    string name;
    int age;
    string subject;
};

struct Course{
    Student *std;
    Professor prof;
    int stdCount;
    
    Course(){
        std = nullptr;
        stdCount = 0;
    }
    
};

struct University{
    string couseName;
    Course *crs;
    int courseCount;
    
    University(){
        crs = nullptr;
        courseCount = 0;
    }
}

int main(){
    int m, n;
    cout<<"Enter number of students: ";
    cin>>m;
    cout<<"Enter number of courses: ";
    cin>>n;
    
    Student *std = new Student[m];
    Course *crs = new Course[n];
    

}