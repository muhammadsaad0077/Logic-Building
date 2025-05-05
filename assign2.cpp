#include<iostream>
#include<string>
using namespace std;

class Employee{
    public:
        string name;
        int id;
        int salary;

        Employee(){

        }

        Employee(string n, int i, int s){
            name = n;
            id = i;
            salary = s;
        }

        virtual void calculateBonus(){
            salary += 1000;
        }

        void virtual display(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
        
        virtual ~Employee(){
        	
		}
};



class Manager:public Employee{
    public:
        int profit;
        Manager(string n, int i, int s): Employee(n, i, s){
        }

        void calculateBonus() override {
            profit = 3000;
        }

        void display() override {
            cout<<"Manager"<<endl;
            Employee::display();
            cout<<"Profit is "<<profit<<endl;
        }
};

class Engine{
    public:
        Engine(){
            cout<<"Engine created"<<endl;
        }
        ~Engine(){
            cout<<"Engine destroyed"<<endl;
        }
};

class Car{
    private:
        Engine eng;

    public:
        void start(){
            cout<<"Engine Start";
        }

};

class Engineer:public Employee{
    public:
        int profit;
        Car c;
        Engineer(string n, int i, int s): Employee(n, i, s){

        }

        void calculateBonus() override {
            profit = 2000;
        }

        void display() override {
            cout<<"Engineer"<<endl;
            Employee::display();
            cout<<"Profit "<<profit<<endl;
        }
};

class Department{
    private:
        Employee* emp[5];
    public:
        string deptName;
        int deptId;
        int count = 0;

        Department(string dName, int dId){
            deptName = dName;
            deptId = dId;
        }
        
        void addEmployee(Employee *e){
        	if(count < 5){
        		emp[count] = e;
            	count++;
			}
        	
		}

        void display() {
        	cout<<"Department Name "<<deptName<<endl;
            cout<<"Department ID "<<deptId<<endl;
            for(int i = 0; i < count; i++){
            	emp[i]->display();
			}
            
        }
};

int main(){
    Manager m("Saad", 1, 10000);
    Engineer e("Ali", 2, 8000);

    m.calculateBonus();
    e.calculateBonus();

    Department d("Tech", 101);
    d.addEmployee(&m);
    d.addEmployee(&e);

    d.display();

    e.c.start(); // Showing Car usage

    return 0;

}
