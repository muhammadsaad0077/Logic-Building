#include<iostream>
using namespace std;

void displayMatrix(int **, int, int);
int diagonalSum(int **, int, int);
int absoluteSum(int **, int, int, int);

int main(){
	int row, col;
	cout<<"Enter row for matrix ";
	cin>>row;
	cout<<"Enter col for matrix ";
	cin>>col;
	
	if(row != col){
		cout<<"To determine diagonals size of row and column should be same ";
	}
	
	else{
		int **arr = new int*[row];
		
		for(int i = 0; i < row; i++){
			arr[i] = new int[col];
		}
		
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				arr[i][j] = i + j + 2;
			}
		}
		
		displayMatrix(arr, row, col);
		
		int diagonalSumResult = diagonalSum(arr, row, col);
		int absoluteSumResult = absoluteSum(arr, row, col, diagonalSumResult);
		
		cout<<"Diagonal Sum is "<<diagonalSumResult<<endl;
		
		cout<<"Absolute Sum is "<<absoluteSumResult;
		
		
		
		
		for(int i = 0; i < row; i++){
			delete[] arr[i];
		}
		
		delete[] arr;
		arr = NULL;
	}
	return 0;
}

void displayMatrix(int **arr, int row, int col){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int diagonalSum(int **arr, int row, int col){
	int sum = 0;
	int index = 0;
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < row; j++){
			if(i == j){
				sum += arr[i][j];
			}
		}
	}
	
	return sum;
}

int absoluteSum(int **arr, int row, int col, int diagonalSum){
	int sum = 0;
	
	for(int i = 0; i < row; i++){
			sum += arr[i][row - i - 1];
	}
	
	return diagonalSum - sum;
}



