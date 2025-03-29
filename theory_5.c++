#include <iostream>
#include <string>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;
    
    Rectangle(){
        
    }
    
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    
    Rectangle(const Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }
    
};

int main() {
    Rectangle r(10, 20);
    Rectangle r2(r);
    
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    
    cout<<r2.length<<endl;
    cout<<r2.breadth<<endl;
    

    return 0;
}

