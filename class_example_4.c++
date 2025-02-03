#include<iostream>
#include<string>
using namespace std;

class myName{
    public:
    string name;
    string rollno;

    void printData(){
        cout<<"My name is "<<name;
        cout<<"\nMy roll no is "<<rollno;
    }
};

int main(){
    myName values;
    values.name = "Saad Bin Sharif";
    values.rollno = "24P-3077";
    values.printData();

}