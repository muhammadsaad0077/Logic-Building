#include<iostream>
#include<string>
#include<fstream>
using namespace std;

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

