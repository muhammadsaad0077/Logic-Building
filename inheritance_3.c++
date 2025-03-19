#include<iostream>
#include<string>
using namespace std;

class Person{
  protected:
  string name;
  
  public:
  void setName(string n){
      name = n;
  }
  void showName(){
      cout<<"Name: "<<name<<endl;
  }
};

class Student : public Person{
    int rollNo;
    
    public:
    void setRollNo(int n){
        rollNo = n;
    }
    
    void showDetails(){
        showName();
        cout<<"Roll Number: "<<rollNo<<endl;
    }
};

int main(){
    
    Student std;
    std.setName("Saad");
    std.setRollNo(7);
    
    std.showDetails();
    
}