#include<iostream>
using namespace std;
void arrFtn(int *, int *);



int main(){
    int arr[25];
    int unique[25];

    
    arrFtn(arr, unique);

    for(int i = 0; i < 25; i++){
        cout<<*(arr + i)<<endl;
    }

}

void arrFtn(int *arr, int *unique){

    cout<<"Enter your score 0-100 ";

    int count = 0;
    
    for(int i = 0; i < 25; i++){
       cin>>*(arr + i);

       int check = 1;

        if(*(arr+i) > 50 ){
            
            for(int j = 0; j < count; j++){
                if(*(arr+i) == *(arr + j)){
                    check = 0;
                    break;
                }
            }
        }

        else{
            cout<<"Value should be greater than 50 ";
            return;
        }

        



        for(int j = 0; j < 25; j++){
            if(*(arr+i) == *(arr + j)+1){
                cout<<"Value should be unique";
                i--;
                break;
            }
            else{
                continue;
            }
        }
    }

}