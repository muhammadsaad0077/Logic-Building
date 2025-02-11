#include <iostream>
using namespace std;
void addMatrix(int *, int *);

int main() {
    const int size = 9;
    int *arr_A = new int[9];
    int *arr_B = new int[9];
    
    int values_A[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int values_B[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for(int i = 0; i < 9; i++){
        arr_A[i] = values_A[i];
        arr_B[i] = values_B[i];
    }
    
    addMatrix(arr_A, arr_B);
    
    delete[] arr_A;
    delete[] arr_B;
    
    arr_A = NULL;
    arr_B = NULL;

    return 0;
}

void addMatrix(int *arr_A, int *arr_B){
    int *result_Arr = new int[9];
    
    for(int i = 0; i < 9; i++){
        
     result_Arr[i] = arr_A[i] + arr_B[i];
     
    }
    
    for(int i = 0; i < 9; i++){
        cout<<result_Arr[i]<<" ";
    }
    
    delete[] result_Arr;
    
    
    
    
}