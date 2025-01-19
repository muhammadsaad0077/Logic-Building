#include<iostream>
using namespace std;

int main(){
	int arr[3][3] = {
	{1, 2, 3}, {4, 5, 6}, {7, 8, 9}
	};
	
	int add = 0;
	
	
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++){
			
			if(i == 1 && j == 1){
				cout<<" ";
				arr[i][j] = 0;
				
			}
			
			else{
				cout<<"\t\t"<<arr[i][j];
				add += arr[i][j];
			}
			
			
		}
		
		cout<<endl;
	}
	
	cout<<"The sum is "<<add;
	
	
	
	
	
	
}
