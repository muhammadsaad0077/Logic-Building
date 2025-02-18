#include<iostream>
using namespace std;

/*
Write a C++ program that uses a 2D array to represent the seating chart of a
movie theater, where each element of the array is either 0 for an empty seat or 1
for a reserved seat. The program prompts the user to input the row and seat
number of the seat they want to reserve, check if the seat is available, and
reserve it if it is. The program keeps track of the total number of reserved seats
and prints it out at the end
*/

int main(){
	int row = 5, col = 5;
	int totalSeats = row * col;
	int**arr = new int*[row];
	int *reserved = new int[row];
	
	for(int i = 0; i < row; i++){
		arr[i] = new int[col];
	}
	
	
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			arr[i][j] = 0;
		}
	}
	
	int seatRow, seat;
	int rowIndex = 0, colIndex = 0;
	
	do{
	  cout<<"Enter Seat Number To Reserve (Enter 0 0 to exit)"<<endl;
	  cout<<"Enter Row (should be less than "<<row<<" )"<<endl;
	  cin>>seatRow;
	  cout<<"Enter Seat No (should be less than "<<col<<" )"<<endl;
	  cin>>seat;
	  
	  if(arr[seatRow][seat] == 0){
	  	cout<<"Your Seat is Reserved"<<endl;
	  	arr[seatRow][seat] = 1;
	  	reserved[rowIndex] = *arr[seatRow] * *arr[seat];
	  	rowIndex++;
	  }
	  else{
	  	cout<<"This seat is already reserved! Choose another Seat"<<endl;
	  }
	  	
	}
	while(seatRow != 0 && seat != 0);
	
	for(int i = 0; i < rowIndex; i++){
			cout<<reserved[i]<<" ";
	}
	
	for(int i = 0; i < row; i++){
		delete[] arr[i];
	}
	
	delete[] arr;
	arr = NULL;
	
	
	delete[] reserved;
	reserved = NULL;
	
	return 0;
	
}
