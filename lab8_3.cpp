#include<iostream>
#include<string>
using namespace std;

class CoffeOrder{
	public:
	
	virtual void processOrder(int size, int price){
		cout<<"The cost is "<<size * price<<"$"<<endl;
	}
	
};

class CustomOrder: public CoffeOrder{
	public:
	void processOrder(int size, int price){
		cout<<"Welcome to the Coffe Shop"<<endl;
		CoffeOrder::processOrder(size, price);
	}
	
	
};

int main(){
	int size, price;
	cout<<"Enter Coffe Size: ";
	cin>>size;
	cout<<"Enter Coffe Price: ";
	cin>>price;
	
	CoffeOrder c1;
	cout<<"Standard Coffe Order..."<<endl;
	c1.processOrder(size, price);
	
	CustomOrder c2;
	cout<<"Custom Coffe Order..."<<endl;
	c2.processOrder(size, price);
	
	return 0;
	
}
