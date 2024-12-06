#include<iostream>
using namespace std;
void isLeapYear(int);

int main(){

    int year;

    cout<<"Enter year to check whether it is leap or not ";
    cin>>year;

    isLeapYear(year);


}

void isLeapYear(int year){
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        cout<<year<<" is a Leap Year";
    }
    else{
        cout<<year<<" is not a Leap Year";
    }
}