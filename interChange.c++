#include<iostream>
using namespace std;
void interchange(int *);



int main(){
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    interchange(num);

    for(int i = 0; i < 10; i++){
        cout<<num[i]<<endl;
    }

}

void interchange(int *num){
    for(int i = 0; i < 10; i+=2){
        int t = *(num + i);
        *(num + i) = *(num + i + 1);
        *(num + i + 1) = t;
    }
}