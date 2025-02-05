#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
	string text, data;
	fstream fileOpen("hello.txt", ios::in | ios::out | ios::ate);
	
	cout<<"Enter about yourself";
	getline(cin, text);
	
	fileOpen << "About: " << text;
	
	while(getline(fileOpen, data)){
		cout<<data<<endl;
	}
	
	fileOpen.close();
	cout<<"Data read sucessfully";
	
	return 0;
}