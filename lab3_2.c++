// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int size = 2;
    int *arr = new int[size];
    
    cout<<"Enter Values "<<endl;
    for(int i = 0; i < size; i++){
        cin>>*(arr + i);
    }
    
    cout<<"Before Swapping "<<endl;
    cout<<"1st number = "<<*(arr + 0)<<endl;
    cout<<"2nd number = "<<*(arr + 1)<<endl;
    
    int temp = *(arr + 0);
    *(arr + 0) = *(arr + 1);
    *(arr + 1) = temp;
    
    cout<<"After Swapping "<<endl;
    cout<<"1st number = "<<*(arr + 0)<<endl;
    cout<<"2nd number = "<<*(arr + 1)<<endl;
    
    delete[] arr;
    arr = NULL;
    
    

    return 0;
}