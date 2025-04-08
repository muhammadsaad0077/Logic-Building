#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
     float area;
     
    virtual void calculateArea(){
        
    }
    
    void display(){
        cout<<"Hello World's, I am. ";
    }
      
};

class Circle:public Shape{
    public:
    int r = 10;

    void calculateArea() override{
        area = r * r * 3.14;
        cout<<area<<endl;
        display();
    }  
    
};

class Rectangle: public Shape{
    public:
    int length = 10, width = 10;
    
    void calculateArea() override{
        area = length * width;
        cout<<area<<endl;
    }
};

int main() {
    Shape* s1 = new Circle;
    Shape* s2 = new Rectangle;
    
    s1->calculateArea();
    s2->calculateArea();
    
    return 0;
}