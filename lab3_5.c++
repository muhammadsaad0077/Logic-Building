#include <iostream>
using namespace std;

int* resizeArray(int*);

int main() {
    int size = 5; 
    int* arr = new int[size];

    for(int i = 0; i < 5; i++){
        arr[i] = i+1;
    }

    cout << "Old array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    arr = resizeArray(arr);


    for (int i = size; i < 10; i++) {
        arr[i] = (i + 1) * 10;
    }

    cout << "Resized array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}

int* resizeArray(int *oldArray) {
    int* newArray = new int[10]; 
    
    for (int i = 0; i < 5; i++) {
        newArray[i] = oldArray[i]; 
    }

    delete[] oldArray; 

    return newArray;
}

