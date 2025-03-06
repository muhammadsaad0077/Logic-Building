#include <iostream>
#include <string>
using namespace std;

struct Car{
    string brand;
    int year;
    double price;
};

void updatePrice(Car &c, float);

int main(){
    Car c;
    cout<<"Enter Car Brand: ";
    cin>>c.brand;
    cout<<"Enter Model Year: ";
    cin>>c.year;
    cout<<"Enter Car Price: ";
    cin>>c.price;
    
    float discount = 20;
    updatePrice(c, discount);
    
    cout<<"Car Final Price: "<<c.price<<endl;
    
    
    
    return 0;
}

void updatePrice(Car &c, float discount){
    float finalPrice = discount / 100 * c.price;
    c.price = c.price - finalPrice;
}
