#include<iostream>
#include<string>
using namespace std;

class Student{
	public:
		string name;
		int rollNo;
};

class Department: public Student{
	public:
		string deptName;
		Student *student;
		
};

int main(){
	Department *dept = new Department;
	dept->deptName = "SE";
	dept->student = new Student[2];
	
	dept->student[0].name = "Saad";
	dept->student[0].rollNo = 12;
	
	dept->student[1].name = "Saadii";
	dept->student[1].rollNo = 5;
	
	cout<<dept->student[0].name<<endl;
	cout<<dept->student[0].rollNo<<endl;
	
	cout<<dept->student[1].name<<endl;
	cout<<dept->student[1].rollNo<<endl;
	
	
	
	return 0;
}
