#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {5, 1, 4, 10, 3, 2};
    int temp;
    
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
    

    return 0;
}