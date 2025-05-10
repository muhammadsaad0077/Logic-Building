#include<iostream>
using namespace std;

int **createArr(int row, int col){
    int **arr = new int*[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }

    return arr;
}

void inputArr(int **arr, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }
}

void printArr(int **arr, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }
}

void deleteArr(int **arr, int row){
    for(int i = 0; i < row; i++){
        delete[] arr[i];
    }
    delete[] arr;
}



int main(){
    int row = 2, col = 2;

    int **arr = createArr(row, col);
    inputArr(arr, row, col);
    printArr(arr, row, col);
    deleteArr(arr, row);

}