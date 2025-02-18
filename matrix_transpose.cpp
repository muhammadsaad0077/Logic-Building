#include<iostream>
using namespace std;

int** matrixTranspose(int**, int, int);

/*
You are building a program to perform matrix operations. Write a function that
accepts a two-dimensional array (matrix) and its dimensions as input. The
function should return the transpose of the matrix using pointers.
*/

int main(){
	int row, col;
	cin>>row>>col;
	
	int **matrix = new int*[row];
	
	for(int i = 0; i < row; i++){
		matrix[i] = new int[col];
	}
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			matrix[i][j] = i + j + j + 2;
		}
	}
	
	cout<<"Array before transpose "<<endl;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int **transpose = matrixTranspose(matrix, row, col);
	
	cout<<"\nArray after transpose "<<endl;
	for(int i = 0; i < col; i++){
		for(int j = 0; j < row; j++){
			cout<<transpose[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i = 0; i < row; i++){
		delete[] matrix[i];
	}
	
	delete[] matrix;
	matrix = NULL;
	
	for(int i = 0; i < col; i++){
		delete[] transpose[i];
	}
	
	delete[] transpose;
	transpose = NULL;
	
	return 0;
	
}


int** matrixTranspose(int**matrix, int row, int col){
	int **transpose = new int*[col];
	for(int i = 0; i < col; i++){
		transpose[i] = new int[row];
	}
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			transpose[j][i] = matrix[i][j];
		}	
	}
	
	return transpose;
}
