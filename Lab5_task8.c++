#include <iostream>
#include <string>
using namespace std;

struct Doctor{
    string name;
    string specialization;
};

struct Hospital{
    string name;
    Doctor d[3];
};

void displayData(Hospital *h, int);


int main(){
    int n = 1;
    Hospital *h = new Hospital[n];
    
    for(int i = 0; i < n; i++){
        cout<<"Enter Hosital Name: "<<endl;
        cin>>h[i].name;
        
        for(int j = 0; j < 3; j++){
            cout<<"Enter name of Doctor "<<j+1<<endl;
            cin>>h[i].d[j].name;
            cout<<"Enter Specialization of Doctor "<<j+1<<endl;
            cin>>h[i].d[j].specialization;
        }
        
    }
    
    displayData(h, n);
    
    delete[] h;
    h = NULL;

    return 0;
}

void displayData(Hospital *h, int n){
    for(int i = 0; i < n; i++){
        cout<<"Hosital Name: "<<h[i].name<<endl;
        
        for(int j = 0; j < 3; j++){
            cout<<"Name of Doctor "<<j+1<<": "<<h[i].d[j].name<<endl;
            
            cout<<"Specialization of Doctor "<<j+1<<": "<<h[i].d[j].specialization<<endl;
        }
        
    }
}


