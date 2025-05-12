#include<iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string n, int a){
            name = n;
            age = a;
        }

        virtual void display(){
            cout<<"Name "<<name<<endl;
            cout<<"Age "<<age<<endl;
        }

        bool operator ==(Person p){
            return (this->age == p.age && this->name == p.name);
        }
};

class Student:public Person{
    public:
        int marks;

        Student(string n, int a, int m):Person(n, a){
            marks = m;
        }
};

int main(){
    Person p("Saad", 20);
    Person p2("Saad", 20);

    if(p == p2){
        cout<<"Both persons have same properties"<<endl;
    }
    else{
        cout<<"Different properites"<<endl;
    }

}