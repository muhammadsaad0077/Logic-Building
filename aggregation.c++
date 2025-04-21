#include<iostream>
using namespace std;

class Employee{
    public:
     string name;
     int id;
     Employee(string n, int i){
         name = n;
         id = i;
         cout<<"Employee created"<<endl;
     }
     
     void display(){
         cout<<name<<endl;
         cout<<id<<endl;
     }
     ~Employee(){
         cout<<"Employee destroyed"<<endl;
     }
};

class Department{
    public:
        Employee* emp[2];
        int totalemp;
        string dept;
        
        
        Department(string d){
            totalemp = 0;
            dept = d;
            cout<<"Department created"<<endl;
        }
        
        void assignDept(Employee* e){
            emp[totalemp] = e;
            totalemp++;
        }
        
        void display(){
            for(int i = 0; i < totalemp; i++){
                cout<<dept<<endl;
                emp[i]->display();
            }
        }
        
        ~Department(){
            cout<<"Department destroyed"<<endl;
        }
};

int main(){
    Employee e1("Saad", 1);
    Employee e2("Saadii", 2);
    
    Department d1("Lead");
    Department d2("HR");
    
    d1.assignDept(&e1);
    d2.assignDept(&e2);
    
    d1.display();
    d2.display();
    return 0;
}