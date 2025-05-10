#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;

        Person(){

        }

        Person(string n, int a){
            name = n;
            age = a;
        }

        void displayPerson(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};


class Teacher:public Person{
    private:
        string dept;
        string *subjects;
        string *student;
        int subCount, stdCount;

    public:

        Teacher(){

        }

        Teacher(string n, int a, string d): Person(n, a){
            dept = d;
        }

        void inputData(){
            cin>>subCount;
            subjects = new string[subCount];

            for(int i = 0; i < subCount; i++){
                cin>>subjects[i];
            }

            cin>>stdCount;
            student = new string[stdCount];

            for(int i = 0; i < stdCount; i++){
                cin>>student[i];
            }
        }

        void displayTeacher(){
            cout<<"Teacher"<<endl;
            displayPerson();

            cout<<"Department: "<<dept<<endl;
            cout<<"Total Subjects: "<<subCount<<endl;

            for(int i = 0; i < subCount; i++){
                cout<<subjects[i]<<endl;
            }

            cout<<"Total Students Under Supervision: "<<stdCount<<endl;

            for(int i = 0; i < stdCount; i++){
                cout<<student[i]<<endl;
            }
        }

        ~Teacher(){
            delete[] student;
            delete[] subjects;
        }
};

int main(){
    Teacher t("Ali", 20, "Physics");
    t.inputData();
    t.displayTeacher();

}