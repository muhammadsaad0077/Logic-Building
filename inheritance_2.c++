#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    void animal(){
        cout<<"Animal"<<endl;
    }
    protected:
    int x = 10;
};

class Mammals : public Animal{
    public:
    void mammals(){
        cout<<"Mammals"<<endl;
        cout<<x<<endl;
    }
};

class Dog : public Mammals{
    public:
    void dog(){
        cout<<"Dog"<<endl;
        cout<<x<<endl;
    }
};

int main(){
    Dog d;
    d.dog();
    d.mammals();
    d.animal();
    
    
}