/*
Let’s say we have a base class Person, and a derived class Student that inherits from it.

Each Student can be enrolled in multiple courses, which are stored in a dynamically allocated array.
*/

#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;

    public:
        Person(){

        }

        Person(string n, int a){
            name = n;
            age = a;
        }
};

class Student:public Person{
    private:
        string* courses;
        string courseName;
        int creditHour;
        int courseCount;

    public:
        Student(){

        }

        Student(string n, int a): Person(n, a){

        }

        void inputData(){
            cin>>courseCount;
            courses = new string[courseCount];

            for(int i = 0; i < courseCount; i++){
                cin>>courses[i];
            }
        }

        void displayData(){
            cout<<"Name: "<<name<<endl;
            cout<<"Courses: "<<courseCount<<endl;
            for (int i = 0; i < courseCount; i++){
                cout<<courses[i]<<endl;
            }                      
        }

        ~Student(){
            delete[] courses;
        }

};


int main(){
    Student s("Saad", 30);
    s.inputData();
    s.displayData();

}