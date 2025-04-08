#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
     float area;
     
    Shape(){
        cout<<"Shape Constructor"<<endl;
    }
    
    ~Shape(){
        cout<<"Shape Destructor"<<endl;
    }
     
    virtual void calculateArea(){
        
    }
    
    void display(){
        cout<<"Hello World's, I am. ";
    }
    
    
};

class Circle:public Shape{
    public:
    
    Circle(){
        cout<<"Circle Constructor"<<endl;
    }
    
    ~Circle(){
        cout<<"Circle destructor"<<endl;
    }
    int r = 10;
    void calculateArea() override{
        area = r * r * 3.14;
        cout<<area<<endl;
        display();
    }
    
    
    
    
};

class Rectangle: public Circle{
    public:
    Rectangle(){
        cout<<"Rectangle Constructor"<<endl;
    }
    ~Rectangle(){
        cout<<"Rectangle Destructor"<<endl;
    }
    int length = 10, width = 10;
    
    
    void calculateArea() override{
        area = length * width;
        cout<<area<<endl;
    }
};

class Triangle: public Rectangle{
    public:
    Triangle(){
        cout<<"Triangle Constructor"<<endl;
    }
    ~Triangle(){
        cout<<"Triangle Destructor"<<endl;
    }
    
};
int main() {
    Shape* s1 = new Circle;
    Shape* s2 = new Rectangle;
    Shape* s3 = new Triangle;
    
    s1->calculateArea();
    s2->calculateArea();
    
    delete s1;
    delete s2;
    delete s3;
    return 0;
}

