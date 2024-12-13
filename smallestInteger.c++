#include<iostream>
using namespace std;
void smallest(int *, int *);

int main(){
    int arr[5] = {5, 3, 0, -1, 1};
    int small = arr[0];

    smallest(arr, &small);
    cout<<"The smallest integer in an array is "<<small;
}

void smallest(int *arr, int *small){

    for(int i = 0; i < 5; i++){
        if(*(arr + i) < *small){
            *small = *(arr + i);
        }
    }

}