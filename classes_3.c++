#include<iostream>
using namespace std;

class Course{
    private:
        string courseName;
        string courseCode;
        int credHours;

    public:
        Course(){
            cout<<"Course Created"<<endl;
        }
        void setCourseData(string c, string cc, int ch){
            courseName = c;
            courseCode = cc;
            credHours = ch;
        }

        void displayCourse(){
            cout<<"Course"<<endl;
            cout<<courseName<<endl;
            cout<<courseCode<<endl;
            cout<<credHours<<endl;
        }

        ~Course(){
            cout<<"Course destroyed"<<endl;
        }
};

class Person{
    private:
        string name;
        int age;

    public:
        Person(){
            cout<<"Person Created"<<endl;
        }

        void setPersonData(string n, int a){
            name = n;
            age = a;
        }

        void displayPerson(){
            cout<<name<<endl;
            cout<<age<<endl;
        }
        ~Person(){
            cout<<"Person destroyed"<<endl;
        }
};

class Student:public Person{
    private:
        Course* course;
        int courseCount;
    
    public:
        Student(){
            cout<<"Student created"<<endl;
        }

        void inputStudentData(){
            string name;
            int age;

            cin>>name;
            cin>>age;

            setPersonData(name, age);

            cin>>courseCount;
            course = new Course[courseCount];
            
            for(int i = 0; i < courseCount; i++){
                string title, courseCode;
                int credHours;
                cin>>title>>courseCode>>credHours;
                course[i].setCourseData(title, courseCode, credHours);
            }
        }

        void displayStudentData(){
            cout<<"Student"<<endl;
            for(int i = 0; i < courseCount; i++){
                course[i].displayCourse();
            }

        }
    
    ~Student(){
        cout<<"Student destroyed"<<endl;
        delete[] course;
    }
};

class Teacher:public Person{
    private:
        Student* student;
        int stdCount;
        string dept;

    public:

        Teacher(){
            cout<<"Teacher created"<<endl;
        }

        void inputTeacherData(){
            string name;
            int age;

            cin>>name;
            cin>>age;

            setPersonData(name, age);

            cin>>dept;
            cin>>stdCount;
            student = new Student[stdCount];

            for(int i = 0; i < stdCount; i++){
                student[i].inputStudentData();
            }
        }

        void displayTeacherData(){
            cout<<"Teacher Info"<<endl;
            displayPerson();
            cout<<"Department: "<<dept<<endl;

            for(int i = 0; i < stdCount; i++){
                student[i].displayStudentData();
            }
        }

    ~Teacher(){
        cout<<"Teacher destroyed"<<endl;
        delete[] student;
    }
};

int main(){
    Teacher t;
    t.inputTeacherData();
    t.displayTeacherData();
    
}