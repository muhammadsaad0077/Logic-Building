#include<iostream>
using namespace std;

int *reverseArray(int *, int);
int secondLargest(int *, int);
int *arrayRotation(int *, int);

int main(){
	int size = 10;
	int *arr = new int[size]{1, 2, 12, 4, 15, 6, 7, 12, 9, 13};
	
	int *reversedArray = reverseArray(arr, size);
	int *rotateArray = arrayRotation(arr, size);
	int secondLarge = secondLargest(arr, size);
	
	cout<<"\n\nOriginal Array ";
	
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n\n\nReversed Array ";
	
	for(int i = 0; i < size; i++){
		cout<<reversedArray[i]<<" ";
	}
	
	cout<<"\n\n\nRotated Array ";
	for(int i = 0; i < size; i++){
		cout<<rotateArray[i]<<" ";
	}
	
	cout<<"\n\nSecond Largest Number in array is "<<secondLarge;
	
	
	delete[] arr, reversedArray, rotateArray;
	arr= NULL;
	reversedArray = NULL;
	rotateArray = NULL;
}

int *reverseArray(int *arr, int size){
	int *reversed = new int[size];
	int index = 0;
	for(int i = size; i >= 0; i--){		
		*(reversed + index) = *((arr + size - 1) - index);
		index++;
	}
	
	return reversed;
	
}

int *arrayRotation(int *arr, int size){
	int k, last;
	cout<<"Enter the no of rotation ";
	cin>>k;
	
	for(int i = 0; i < k; i++){
		last = arr[size - 1];
		for(int j = size - 1; j > 0; j--){
			arr[j] = arr[j-1];
		}
		arr[0] = last;
		
	}
	
	return arr;
	
}

int secondLargest(int *arr, int size){
	int large = arr[0];
	int secondLarge = arr[1];
	
	for(int i = 0; i < size; i++){
		if(arr[i] > large){
			secondLarge = large;
			large = arr[i];			
		}
		else if(arr[i] < large && arr[i] > secondLarge){
			secondLarge = arr[i];
		}
		else{
			continue;
		}
	}
	return secondLarge;
}


