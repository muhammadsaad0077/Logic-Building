#include <iostream>
#include<cstring>
using namespace std;

int main() {
    
    struct person {
        char name[50];
        int age;
        
    };
    
    person p[3];
   
    cout<<"Enter Person Data: "<<endl;
    
    for(int i = 0; i < 3; i++){
        cout<<"Enter Name: ";
        cin>>p[i].name;
        cout<<"Enter Age: ";
        cin>>p[i].age;
        
    }
    
    for(int i = 0; i < 3; i++){
        cout<<p[i].name<<endl;
        cout<<p[i].age<<endl;
    }
    
 
    return 0;
}

