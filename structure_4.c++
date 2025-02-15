#include<iostream>
#include<cstring>
using namespace std;

struct Rectangle{
    int length;
    int width;
};

int calculateArea(Rectangle &r);

int main(){
    Rectangle r;
    int result = calculateArea(r);
    cout<<"Area is "<<result;
    
    return 0;
    
    
    
}

int calculateArea(Rectangle &r){
    
    cout<<"Enter Length: ";
    cin>>r.length;
    cout<<"Enter Width: ";
    cin>>r.width;
    
    return r.length * r.width;
}



