#include <iostream>
using namespace std;

class Engine{
	public:
	Engine(){
		cout<<"Engine Crearted"<<endl;
	}
	~Engine(){
		cout<<"Enigne Destroyed"<<endl;
	}
	
	void start(){
		cout<<"Engine Started"<<endl;
	}
};

class Car{
	private:
		Engine eng;
		
	public:
		Car(){
		cout<<"Car Crearted"<<endl;
		}
		~Car(){
		cout<<"Car Destroyed"<<endl;
		}
		
	void startCar(){
		cout<<"Car Started"<<endl;
		eng.start();
		
	}
	
};

int main(){
	Car c;
	c.startCar();
	
	return 0;
}
