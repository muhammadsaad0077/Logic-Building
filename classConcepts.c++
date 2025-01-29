#include<iostream>
using namespace std;

class Car{
    public:
    int model;
    string company;

    void display(){
        cout<<"Car model "<<model;
        cout<<"\nCar Company "<<company;
    }
};

int main(){
    Car myCar;

    myCar.model = 2025;
    myCar.company = "Honda";

    myCar.display();

}