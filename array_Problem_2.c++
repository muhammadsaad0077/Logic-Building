#include<iostream>
using namespace std;

void swapArrayValues(int *, int *);

int main(){
    int arr_a[5] = {2, 3, 4, 5, 6};
    int arr_b[5] = {11, 12, 13, 14, 15};

    cout<<"Array A Elements are "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<arr_a[i]<<endl;
    }

    cout<<"Array B Elements are "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<arr_b[i]<<endl;
    }

    swapArrayValues(arr_a, arr_b);

    cout<<"Array A Elements are "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<arr_a[i]<<endl;
    }

    cout<<"Array B Elements are "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<arr_b[i]<<endl;
    }

    return 0;
}



void swapArrayValues(int *arr_a, int *arr_b){
    int temp;

    for(int i = 0; i < 5; i++){
    temp = *(arr_a + i);
    *(arr_a + i) = *(arr_b + i);
    *(arr_b + i) = temp;
    }

}