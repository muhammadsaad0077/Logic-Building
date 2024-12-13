#include<iostream>
using namespace std;

void checkArray(int *, int);

int main(){

    int n = 7;
    int arr[n] = {1, 2, 3, 4, 3, 4, 1};

    checkArray(arr, n);

}

void checkArray(int *arr, int size){

    for(int i = 0; i < size/2; i++){
        if(*(arr + i) == *(arr + size - 1 - i)){
            cout<<"The "<<*(arr + i)<<" is equal to the "<<*(arr + size - 1 - i)<<endl;
        }
        else{
            cout<<"The "<<*(arr + i)<<" is not equal to the "<<*(arr + size - 1 - i)<<endl;
        }
    }

}