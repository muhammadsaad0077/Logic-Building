#include <iostream>
using namespace std;

class Teacher{
    public:
      string name;
      string subject;
      
      Teacher(string n, string s){
          name = n;
          subject = s;
      }
      
      void displayInfo(){
          cout<<"Name: "<<name<<endl;
          cout<<"Subject: "<<subject<<endl;
      }
};

class Department{
    public:
        string deptName;
        Teacher *teacher;
        
        Department(Teacher* t, string d){
            teacher = t;
            deptName = d;
        }
        
        void displayDepartment(){
            teacher->displayInfo();
            cout<<"Department: "<<deptName;
        }
    
};



int main() {
    Teacher t1("Saad", "CS");
    Department d(&t1, "Developer");
    d.displayDepartment();
    
    return 0;
}