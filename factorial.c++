#include<iostream>
using namespace std;
void factorial(int *, int *);



int main(){
    int num = 0;
    int result;
    int *ptr = &num;
    factorial(ptr, &result);

    cout<<"The factorial of "<<num<<" is "<<result;
}

void factorial(int *num, int *result){
    *result = 1;
    cout<<*num<<endl;
    for(int i = *num; i > 0; i-- ){
        *result *= i;
    }
    cout<<*result<<endl;
}