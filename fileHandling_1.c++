#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void createFile(string);
void appendAge(string);

int main(){
    string your_rollno;
    cout<<"Enter file name ";
    cin>>your_rollno;

    cin.ignore();

    createFile(your_rollno);
    appendAge(your_rollno);
   

}

void createFile(string fileName){
    ofstream outputFile(fileName);

    if(!outputFile){
        cerr<<"Error in creating file...";
        return;
    }

    string name, rollno, hobbies;

    cout<<"Enter Your Name ";
    getline(cin, name);

    cout<<"Enter Your Roll No ";
    getline(cin, rollno);

    cout<<"Enter Your Hobbies ";
    getline(cin, hobbies);

    outputFile << "Name: " << name<<endl;
    outputFile << "Roll_no: " << rollno<<endl;
    outputFile << "Hobbies: " << hobbies<<endl;

    outputFile.close();
    cout<<"Data written sucessfully"<<endl;

}

void appendAge(string fileName){
    ofstream outputFile(fileName, ios::app);

    if(!outputFile){
        cerr<<"Error in opening file";
    }
    int age;
    cout<<"Enter your Age ";
    cin>>age;

    outputFile << "Age: " << age;

    outputFile.close();
    cout<<"Age appended at the end.." ;

}