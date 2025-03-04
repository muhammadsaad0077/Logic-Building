#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int width;
};

int calculateArea(Rectangle r);

int main() {
    Rectangle r;
    cout<<"Enter Length: ";
    cin>>r.length;
    cout<<"Enter Width: ";
    cin>>r.width;
    
    int result = calculateArea(r);
    cout<<"Area is "<<result;

    
    return 0;
}

int calculateArea(Rectangle r){
    int result;
    result = r.length * r.width;
    return result;
}
