#include <iostream>
#include <string>
using namespace std;

class Car{
    string model;
    int modelYear;
    
    public:
    Car(){
        
    }
    Car(string model, int modelYear){
        this->model = model;
        this->modelYear = modelYear;
    }
    
    void details(){
        cout<<"Model: "<<model<<endl;
        cout<<"Model Year: "<<modelYear<<endl;
    }
    
    ~Car(){
        cout<<"Car Object is destroyed"<<endl;
    }
};

int main() {
    Car c("honda", 2025);
    c.details();

    return 0;
}
