#include<iostream>
using namespace std;

class Employee{
    public:
    static int count;
    static void employeeIncrement(){
        count++;
        cout<<"Currently Employees are "<<count<<endl;
    }
};

int Employee::count = 0;


int main(){
    Employee emp;
    emp.employeeIncrement();
    emp.employeeIncrement();
    
    return 0;
}