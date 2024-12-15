#include<iostream>
using namespace std;

int calculatePower(int num, int power);

int main(){

    int num, sum = 0, originalNum, digits = 0;
    cout<<"Enter Number ";
    cin>>num;

    originalNum = num;

    while(num != 0){
        num /= 10;
        digits++;
    }

    num = originalNum;

    while(num != 0){
        int remainder = num % 10;
        sum += calculatePower(remainder, digits);
        num /= 10;
    }

    if(sum == originalNum){
        cout<<"The entered number is armstrong";
    }
    else{
        cout<<"Entered number is not armstrong";
    }

    

    


}

int calculatePower(int base, int power){
    int prod = 1; 
    for(int i = 1; i <= power; i++){   
        prod *= base;
    }
    return prod;
}