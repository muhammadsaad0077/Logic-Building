#include<iostream>
#include<cstring>
using namespace std;

struct Student{
    char name[50];
    int rollNo;
    float marks;
} s[3];

int main(){
    cout<<"Enter Student Details "<<endl;
    
    for(int i = 0; i < 3; i++){
        cout<<"Enter Name: ";
        cin>>s[i].name;
        cout<<"Enter Roll No: ";
        cin>>s[i].rollNo;
        cout<<"Enter Marks: ";
        cin>>s[i].marks;
        
    }
    
    for(int i = 0; i < 3; i++){
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Roll No: "<<s[i].rollNo<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;
        
    }
    
}