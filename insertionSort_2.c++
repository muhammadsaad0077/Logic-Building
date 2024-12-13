#include<iostream>
using namespace std;

void printArray(int *, int);

int main(){
    int arr[25] = {44, 33, 12, 34, 1, 4, 101, 67, 113, 9, 6, 17, 53, 83, 78, 96, 0, 55, 29, 34, 43, 62, 22, 32, 11};
    int size = 25;

    for(int i = 1; i < size; i++){

        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;


    }

    cout<<"The Final Sorted Array is "<<endl;

    printArray(arr, size);



}

void printArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout<<*(arr + i)<<" ";
    }
}