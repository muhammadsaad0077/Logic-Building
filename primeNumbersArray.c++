#include<iostream>
using namespace std;
int main(){
    int low, high;
    cout<<"Enter lower limit ";
    cin>>low;
    cout<<"Enter higher limit ";
    cin>>high;
    int size = high - low;
    int primeNumber[size];
    int index = 0;

    for(int i = low; i <= high; i++){
        int count = 0;
        for(int j = 2; j < i; j++){
            
            if(i % j == 0){
                count++;
                break;
        }

        }

        if(count == 0){

            primeNumber[index] = i;
            index++;
        }
        
    }

    for(int i = 0; i < index; i++){
        cout<<"Prime number is "<<primeNumber[i]<<endl;
    }

    return 0;
}