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

        void virtual calculateProfit(){
            salary += 1000;
        }

        void virtual display(){
            cout<<name;
            cout<<id;
            cout<<salary;
        }
};



class Manager:public Employee{
    public:
        int profit;
        Manager(string n, int i, int s): Employee(n, i, s){
        }

        void calculateProfit() override {
            profit = 3000;
        }

        void display() override {
            cout<<"Manager"<<endl;
            Employee::display();
            cout<<"Profit is "<<profit;
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

        void calculateProfit() override {
            profit = 2000;
        }

        void display() override {
            cout<<"Engineer"<<endl;
            Employee::display();
            cout<<"Profit "<<profit;
        }
};

class Department{
    private:
        Employee* emp[5];
    public:
        string deptName;
        int deptId;

        Department(Employee* e, string dName, int dId){
            deptName = dName;
            deptId = dId;
            emp = e;
        }

        void display() {
            emp->display();
            cout<<"Department Name "<<deptName<<endl;
            cout<<"Department ID "<<deptId<<endl;
        }
};

int main(){
    Manager m("saad", 1, 10000);
    Engineer e("Ali", 1, 5000);
    Department d(&m, "Finance", 1);

}