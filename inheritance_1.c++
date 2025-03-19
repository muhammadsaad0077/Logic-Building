#include <iostream>
#include <string>
using namespace std;

class Animal{
    protected:
    string name;
    string color;
    
    public:
    void setData(string n, string c){
        name = n;
        color = c;
    }
    
    void check(){
        cout<<"Name: "<<name<<endl;
        cout<<"Color: "<<color<<endl;
    }
};

class Cat : public Animal{
    public:
    string chrst;
    void show(){
        cout<<name<<" has "<<chrst<<" behaviour"<<endl;
    }
    
};

int main() {
    Animal a1;
    Cat c;
    c.setData("Cat", "White");
    c.chrst = "good";
    c.show();
    c.check();
    

    return 0;
}