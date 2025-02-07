#include<iostream>
#include<string>
#include<fstream>
using namespace std;

<<<<<<< HEAD
void fileOpen(string);

int main(){
    ifstream fileName("hello.txt");
    string text;

    if(fileName.is_open()){
        while(getline(fileName, text)){
            cout<<text<<endl;
        }
    }
}

=======
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
>>>>>>> f0b216f5c2e55903b688d9793340976bad230b33
