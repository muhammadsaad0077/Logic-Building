#include<iostream>
using namespace std;

int main(){
    int *num = new int;

    *num = 7;

    cout<<"The address of variable is "<<num;
    cout<<"\nThe value of variable is "<<*num;

    delete num;

    num = NULL;

    if(num == NULL){
        cout<<"\nNum deleted sucessfully";
    }

    cout<<"\nThe address of variable is "<<num;
    cout<<"\nThe value of variable is "<<*num;



}