#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
	string text;
	ifstream fileOpen("hello.txt");
	
	if(!fileOpen){
		cerr<<"Error in opening file";
		return 0;
	}
	
	while(getline(fileOpen, text)){
		cout<<text<<endl;
	}
	fileOpen.close();
	cout<<"Data read sucessfully";
	return 0;
}