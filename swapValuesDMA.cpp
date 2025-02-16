#include<iostream>
#include<string>
using namespace std;

/*
Write a code that takes a 2D string array with values {“Read”, “Bear”, “Hat”, “beat”,
“ ”} swaps the values as shown in the example:
{“Bead”, “Rear”, “Bat”, “Heat”, “ ”}
And then calculates the total no of characters in the 2D array
*/

int main(){
	int row = 1, col = 5;
	string **arr = new string*[row];
	
	for(int i = 0; i < row; i++){
		arr[i] = new string[col];
	}
	
	arr[0][0] = "Read";
	arr[0][1] = "Bear";
	arr[0][2] = "Hat";
	arr[0][3] = "beat";
	arr[0][4] = " ";
	
	
	arr[0][0] = "Bead";
	arr[0][1] = "Rear";
	arr[0][2] = "Bat";
	arr[0][3] = "Heat";
	arr[0][4] = " ";
	
	int count = 0;
	int totalChars = 0;
	
	for(int i = 0; i < col; i++){
		count = 0;
		
		while(arr[0][i][count] != '\0'){
			count++;
		}
				
		totalChars += count;
	}
	
	for(int i = 0; i < col; i++){
		cout<<arr[0][i]<<endl;
	}
	
	cout<<"Total Character in the Array are "<<totalChars<<endl;
	
	delete[] arr[0];
	
	delete[] arr;
	
	arr = NULL;
	
	
}
