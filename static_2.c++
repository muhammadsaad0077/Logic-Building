#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    static int maxSpeed;
    int currentSpeed;
    
    void setSpeed(int speed){
        currentSpeed = speed;
        if(currentSpeed > maxSpeed){
            maxSpeed = currentSpeed;
        }
        
    }
    
    static int getMaxSpeed(){
        return maxSpeed;
    }
    
};

int Car::maxSpeed = 0;

int main(){
    Car obj1, obj2, obj3;
    obj1.setSpeed(100);
    obj2.setSpeed(300);
    obj3.setSpeed(200);
    
    cout << "Max Speed Recorded: " << Car::getMaxSpeed() << endl;
    
}
