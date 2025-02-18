#include<iostream>
using namespace std;

int main(){
	int row, col;
	cin>>row>>col;
	int **arr = new int*[row];
	
	for(int i = 0; i < row; i++){
		arr[i] = new int[col];
	}
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if(i == 0 || j == 0){
				arr[i][j] = 1;
			}
			else{
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
	}
	
	cout<<"The total possible ways to reach the robot at destination is "<<arr[row - 1][col - 1];
	
	return 0;
	
}


