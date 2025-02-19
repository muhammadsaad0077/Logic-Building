#include<iostream>
using namespace std;

int **calculateProduct(int **, int **, int, int, int);

int main(){
	int rowA, colA, rowB, colB;
	cout<<"Enter no of rows and coloumns ";
	cin>>rowA>>colA>>rowB>>colB;
	
	if(colA != rowB){
		cout<<"Matrices cannot be multiplied. Number of columns in A must be equal to number of rows in B. "<<endl;
	}
	
	else{
		
	int **matrix = new int*[rowA];
	int **matrix2 = new int*[rowB];
	
	for(int i = 0; i < rowA; i++){
		matrix[i] = new int[colA];
	}
	
	for(int i = 0; i < rowB; i++){
		matrix2[i] = new int[colB];
	}
	
	
	
	
	
	
	
	for(int i = 0; i < rowA; i++){
		for(int j = 0; j < colA; j++){
			matrix[i][j] = i + j + 3;
		}
	}
	
	for(int i = 0; i < rowB; i++){
		for(int j = 0; j < colB; j++){
			matrix2[i][j] = i + j + 3;
		}
	}
	
	
	
	int **result = calculateProduct(matrix, matrix2, rowA, colA, colB);
	
	for(int i = 0; i < rowA; i++){
		for(int j = 0; j < colB; j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i = 0; i < rowA; i++){
		delete[] matrix[i];
	}
	
	for(int i = 0; i < rowB; i++){
		delete[] matrix2[i];
		delete[] result[i];
	}
	
	delete[] matrix;
	delete[] matrix2;
	delete[] result;
	
	matrix = NULL;
	matrix2 = NULL;
	result = NULL;
	
  }
	
	
  return 0;
}

int **calculateProduct(int **matrix, int **matrix2, int rowA, int colA, int colB){
	int **product = new int*[rowA];
	
	for(int i = 0; i < rowA; i++){
		product[i] = new int[colB];
	}
	
	for(int i = 0; i < rowA; i++){
		for(int j = 0; j < colB; j++){
			product[i][j] = 0;
		    for(int k = 0; k < colA; k++){
		    	product[i][j] += matrix[i][k] * matrix2[k][j];
			}
		}
	}
	
	return product;
	
	
}


