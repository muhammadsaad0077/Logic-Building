#include<iostream>
#include<string>
using namespace std;

class Shape{
	private:
	 int area;
	
	protected:
		void calculateArea(int r){
			area = r * r * 3.14;
		}
	
	public:
		void displayArea(){
			cout<<"Area is "<<area<<endl;
		}
};

class Circle: public Shape{
	private:
		int radius;
	
	public:
		
		Circle(){
			radius = 0;
		}
		
		Circle(int r){
			radius = r;
			calculateArea(radius);
		}
		
	
};

int main(){
	Circle c(10);
	c.displayArea();
	
	
	return 0;
}
