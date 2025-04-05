#include<iostream>
#include<string>
using namespace std;

class Person{
	private:
		string name;
		int age;
		
	public:
		string setName(string n){
			name = n;
			return name;
		}
		
		int setAge(int a){
			age = a;
			return age;
		}
		
};

class Student: public Person{
	public:
		string grade, n, a;
		
		Student(string n, int a, string g){
			cout<<setName(n)<<endl;
			cout<<setAge(a)<<endl;
			grade = g;
			cout<<grade<<endl;
		}
		
		
		
};

int main(){
	Student s("Saad", 20, "A");
	
	
	
	return 0;
}
