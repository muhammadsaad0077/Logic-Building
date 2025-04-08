#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:
     string name;
     int salary;
     
     Employee(string n, int s){
         name = n;
         salary = s;
     }
     
     void display(){
         cout<<name<<endl;
         cout<<salary<<endl;
     }
};

class Manager:virtual public Employee{
    public:
    int bonus;
    
    Manager(string n, int s, int b) : Employee(n, s) {
     bonus = b;
}

    
    void display(){
        Employee::display();
        cout<<bonus<<endl;
    }
}; 

class Developer:virtual public Employee{
    public:
    string project;
    
    Developer(string n, int s, string p): Employee(n, s){
        project = p;
    }
    
    void display(){
        Employee::display();
        cout<<project<<endl;
    }
};

class TechLead : public Manager, public Developer {
public:
    TechLead(string n, int s, int b, string p)
        : Employee(n, s), Manager(n, s, b), Developer(n, s, p) {}

    void display() {
        Employee::display();
        cout << "Bonus: " << bonus << endl;
        cout << "Project: " << project << endl;
    }
};




int main() {
    TechLead t("Saad", 1000, 100, "Game");
    t.display();
    
    

    return 0;
}
