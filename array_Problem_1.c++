#include<iostream>
using namespace std;

int main(){
    int arr[25];

    for(int i = 0; i < 25; i++){
        cout<<"Enter "<<i+1<<" number ";
        cin>>arr[i];
    }

    int arr_2[25];
    int index = 0;
    int dup;

    for(int i = 0; i < 25; i++){
        if(arr[i] > 10 && arr[i] < 100){
            dup = 0;
          
          for(int j = 0; j < index; j++){
            if(arr[i] == arr_2[j]){
                dup = 1;
            }
          }
          
          if(dup == 0){
            arr_2[index] = arr[i];
            index++;
          }
        }
    }

    

    for(int i = 0; i < index; i++){
        cout<<arr_2[i]<<endl;
    }
    return 0;
}