#include<iostream>
#include<cstring>
using namespace std;

class Person{
    protected:
        int* age;
        char* name;

    public:

        Person(const char* n, int a){
            name = new char[strlen(n) + 1];
            age = new int;
            *age = a;
            strcpy(name, n);
        }

        Person(const Person& p){
            name = new char[strlen(p.name) + 1];
            name = p.name;
            age = new int;
            age = p.age;
        }

        void show(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<*age<<endl;
        }

        ~Person(){
            delete[] name;
            delete age;
        }

};

class Student: public Person{
    public:
        int* marks;

        Student(const char* name, int a, int m):Person(name, a){
            marks = new int;
            *marks = m;
        }

        Student(const Student& s): Person(s){
            marks = new int;
            *marks = *(s.marks);
        }

        void show(){
            Person::show();
            cout<<"Marks: "<<*marks<<endl;
        }

        ~Student(){
            delete marks;
        }

};

int main(){
    Student s("Saad", 20, 90);
    Student s2 = s;
    s.show();
    s2.show();


}