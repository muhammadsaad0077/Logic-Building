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
};

class Manager: public Employee{
	public:
		string department;
		
		Manager(){
			
		}
		
		Manager(string n, int i, int s) : Employee(n , i, s){
			
		}
		
		Manager(string n, int i, int s, string d){
			name = n;
			id = i;
			salary = s;
			department = d;
		}
		
		void displayEmployeeDetails(){
			cout<<"Name: "<<name<<endl;
			cout<<"ID: "<<id<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
		
		void displayManagerDetails(){
			displayEmployeeDetails();
			cout<<"Department: "<<department<<endl;
		}
};


int main(){
	Manager m("Saad", 7, 550000);
	Manager m2("Ali", 7, 1000, "Team Lead");

	cout<<"Employee"<<endl;
	m.displayEmployeeDetails();
	
	cout<<"Manager"<<endl;
	m2.displayManagerDetails();
	
	
	return 0;
}
