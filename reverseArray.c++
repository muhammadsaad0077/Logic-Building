#include<iostream>
using namespace std;

void reverse(int *, int *);

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int secArr[5];

    reverse(arr, secArr);

    for(int i = 0; i < 5; i++){
        cout<<secArr[i]<<endl;
    }

}

void reverse(int *arr, int *secArr){
    for(int i = 0; i < 5; i++){
        *(secArr + i) = *(arr + 4 - i);
    }

}