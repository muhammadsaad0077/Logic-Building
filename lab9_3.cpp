#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string city;
    string street;

public:
    Address(string city, string street){
    	this->city = city;
    	this->street = street;
        cout << "Address created: " << street << " " << city << endl;
    }

    ~Address() {
        cout << "Address destroyed." << endl;
    }

    void display() {
        cout << "Address: " << street << " " << city << endl;
    }
};

class Student {
private:
    string name;
    Address* address;  

public:
    Student(string name, Address* addr){
    	this->name = name;
    	this->address = addr;
        cout << "Student " << name << " created" << endl;
    }

    ~Student() {
        cout << "Student " << name << " destroyed" << endl;
    }

    void display(){
        cout << "Student: " << name << endl;
        address->display();
    }
};

int main() {
    Address* addr = new Address("Peshawar", "Hayatabad");

    {
        Student s1("Saad", addr);
        s1.display();
    } 

    cout<<"After student is gone address still exists"<<endl;
    addr->display();

    
    delete addr;

    return 0;
}

