#include<iostream>
using namespace std;

class Employee{
    public:
    const int salary = 1000;
    int id;
    
    Employee(){
    }
    
    Employee(int id){
        this->id = id;
        cout<<"Object Address: "<<this<<endl;
    }
    
    void details(){
        cout<<"ID: "<<this->id<<endl;
        cout<<"Salary: "<<this->salary<<endl;
    }
    
};



int main(){
    Employee emp(1);
    emp.details();
    
    
    return 0;
}