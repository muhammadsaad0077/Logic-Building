#include<iostream>
using namespace std;
void checkElements(int *, int *);

int main(){
    int arr_A[5] = {54, 2, 37, 5, 45};
    int arr_B[5] = {51, 2, 45, 1, 6};

    checkElements(arr_A, arr_B);
    return 0;
}

void checkElements(int *arr_A, int *arr_B){
    int check = 0;
    for(int i = 0; i < 5; i++){
        if(*(arr_A + i) == *(arr_B + i)){
            check++;
        }
    }

    cout<<"The "<<check<<" Elements are at same location with same value";
}