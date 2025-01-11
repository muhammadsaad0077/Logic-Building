#include<iostream>
using namespace std;
int main(){
    int low, high;
    cout<<"Enter lower limit ";
    cin>>low;
    cout<<"Enter higher limit ";
    cin>>high;
    int count;

    for(int i = low; i <= high; i++){
        count = 0;
        for(int j = 2; j < i; j++){
            
            if(i % j == 0){
                count++;
                break;
            }

        }

        if(count == 0)
        cout<<"Prime number is "<<i<<endl;
        
    }

    return 0;
}