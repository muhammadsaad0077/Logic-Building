#include<iostream>
using namespace std;

void printArray(int *, int);

int main(){
    int arr[5] = {44, 33, 55, 22, 11};
    int size = 5;

    cout<<"Original Array ";
    printArray(arr, size);

    for(int i = 1; i < 5; i++){  
        int key = arr[i];   
        int j = i - 1;  

        while(j >= 0 && arr[j] > key){   

            arr[j + 1] = arr[j];  
            j--;  

        }  
        arr[j + 1] = key;

        cout<<"Iteration "<<i<<" : ";
        printArray(arr, size);
    }

    cout<<"Final sorted array is ";
    printArray(arr, size);
    
    
}

void printArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout<<*(arr + i)<<" ";
    }
}