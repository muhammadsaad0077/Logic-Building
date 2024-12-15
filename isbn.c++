#include<iostream>
using namespace std;

int main(){

    int isbn[10] = {0, 1, 0, 3, 2, 4, 5, 3, 4, 5};

    int sum = 0;

    for(int i = 1; i <= 10; i++){
        sum += isbn[i-1] * i;
    }

    if(sum % 11 == 0){
        cout<<"Entered ISBN is Valid";
    }
    else{
        cout<<"Entered ISBN is not valid";
    }



}