#include<iostream>
using namespace std;
void commonElements(int *, int *);

int main(){
    int arr_A[5] = {54, 2, 37, 5, 45};
    int arr_B[5] = {51, 2, 45, 1, 6};

    commonElements(arr_A, arr_B);
    return 0;
}

void commonElements(int *arr_A, int *arr_B){
    int check = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(*(arr_A + i) == *(arr_B + j)){
                check++;
            }
        }
    }

    cout<<"The "<<check<<" Elements are common in both arrays";
}
