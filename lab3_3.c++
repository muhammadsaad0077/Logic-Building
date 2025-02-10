#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int checkArraySize = size - 1;

    int *arr = new int[size];

    cout << "Enter numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) <<endl;
    }


    for (int i = 0; i < size / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + checkArraySize - i);
        *(arr + checkArraySize - i) = temp;
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) <<endl;
    }
    cout << endl;

    delete[] arr;
    arr = NULL;

    return 0;
}
