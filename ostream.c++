// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        
    public:
        Student(string n, int a){
            name = n;
            age = a;
        }
        friend ostream& operator <<(ostream& out, Student& s);
};

ostream& operator <<(ostream& out, Student& s){
    out<<s.name<<endl;
    out<<s.age<<endl;
    return out;
}


int main() {
    Student s("Saad", 12);
    cout<<s;

    return 0;
}