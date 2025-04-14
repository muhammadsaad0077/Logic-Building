/*

- Student Enrollment system
- assign constant unique id when new student is added
- one varibale keep the record of total students
- one varibale should be the maximum student that we can create


*/

#include<iostream>
using namespace std;

class Student{
	public:
		static int totalStudent;
		static int max;
		int id;
		
		Student(){
			id = totalStudent + 1;
			totalStudent++;	
		}
		
		int getID() const{
			return id;
		}
		
		static int getStudentCount(){
			return totalStudent;
		}
		
		static bool canCreateStudent(){
		  return totalStudent < max;
		}
		
	
				
		
};
int Student::totalStudent = 0;
int Student::max = 2;

int main(){
	int std;
	cout<<"Enter Number of Student: ";
	cin>>std;
	Student *s[std];
	
	for(int i = 0; i < std; i++){
		if(Student::canCreateStudent()){
			s[i] = new Student;
			cout<<"Successfull: Limit not reached yet"<<endl;
			cout<<"Student Created with id "<<s[i]->getID()<<endl;
			cout<<"Total Student "<<Student::getStudentCount()<<endl;
		}
		else{
			cout<<"Warning: Student Limit Reached"<<endl;
			s[i] = NULL;
		}
	}
	
	for(int i = 0; i < std; i++){
		if(s[i] != NULL){
			delete s[i];
		}
	}
	
	
	
	
	
	
	
	

	
	return 0;
}
