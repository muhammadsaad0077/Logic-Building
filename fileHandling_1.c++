#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    // string your_rollno;
    // cout<<"Enter file name ";
    // cin>>your_rollno;

    ofstream outputFile("saad.txt");
    if(outputFile.is_open()){
        string line1, line2, line3;
        string name = "Name: ";
        getline(cin, line1);
        string rollno = "RollNo: ";
        getline(cin, line2);
        string hobbies = "Hobbies: ";
        getline(cin, line3);

        outputFile << name << line1<<endl;
        outputFile << rollno << line2<<endl;
        outputFile << hobbies << line3<<endl;

        outputFile.close();
        cout<<"Data written sucessfully";
    }
    else{
        cerr<<"Failed to create a file";
    }

}