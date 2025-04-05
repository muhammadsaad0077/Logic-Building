#include<iostream>
#include<string>
using namespace std;

class Vehicle{
	public:
		virtual void startEngine(){
			cout<<"Function in Base Class"<<endl;
		}
};

class Airplane: public Vehicle{
	public:
		void startEngine() override {
			cout<<"Function in Derived Class"<<endl;
		}
};

int main(){
	Vehicle v;
	Airplane a;
	v.startEngine();
	a.startEngine();
	
	
	return 0;
}
