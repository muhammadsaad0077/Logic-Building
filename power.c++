#include<iostream>
using namespace std;

int calculatePower(int, int);

int main(){

    int base = 9, power = 2;

    cout<<calculatePower(base, power);

}


int calculatePower(int base, int power){
    int result = 1;
    for(int i = 1; i <= power; i++){
        result *= base;
    }

    return result;
}