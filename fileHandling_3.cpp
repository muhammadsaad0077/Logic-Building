#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void createFile(string);

int main(){

    string fileName;
    cout<<"Enter file name ";
    getline(cin, fileName);
    fileName += ".txt";

    createFile(fileName);

    return 0;
}

void createFile(string fileName){
    ofstream file(fileName, ios::out);
    string name, rollNo, hobby;
    cout<<"Enter name ";
    getline(cin, name);
    cout<<"Enter Roll No ";
    getline(cin, rollNo);

    file<<"Name: "<<name;
    file<<"Roll No: "<<rollNo;
    cout<<"Data written.";
    file.close();
}
