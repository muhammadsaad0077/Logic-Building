#include<iostream>
using namespace std;

void checkInteger(int *);

int main(){
    int size = 10,arr[size] = {1, 3, 5, 4, 3, 2, 5, 6, 7, 8};
    checkInteger(arr);
    
}

void checkInteger(int *arr){
    int choice, count = 0;
    cout<<"Enter the number to check in the array: ";
    cin>>choice;

    for(int i = 0; i < 10; i++){
        if(choice == *(i + arr)){
            count++;
        }
    }

    cout<<"The number "<<choice<<" occurs "<<count<<" times in array";

}