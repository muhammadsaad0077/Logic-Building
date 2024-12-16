#include<iostream>
using namespace std;

// Function Declaration
void display(int arr[], int size);

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    cout<<"Array elements are:\n";
    display(arr, size);  // Function call

    cout<<arr<<endl;

    

    return 0;
}

// Function Definition
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<arr[i];  // Print each element
    }
    printf("\n");
}
