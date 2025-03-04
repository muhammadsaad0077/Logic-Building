#include <iostream>
#include <string>
using namespace std;

struct Employee{
    string name;
    int id, salary;
};


int main() {
    Employee emp;
    Employee *ptr = &emp;
    
    ptr->name = "Saad";
    ptr->id = 123;
    ptr->salary = 50000;
    
    cout<<"Name: "<<ptr->name<<endl;
    cout<<"ID: "<<ptr->id<<endl;
    cout<<"Salary: "<<ptr->salary<<endl;
    
    return 0;
}


