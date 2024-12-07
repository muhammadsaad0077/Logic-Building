#include<iostream>
using namespace std;

int main(){
    char arr1[] = {'s', 'a', 'a', 'd'};
    char arr2[] = {'d', 'a', 'a', 's'};

    char *ptr1 = arr1;
    char *ptr2 = arr2;

    int *flag = new int;
    *flag = 1;
    

    while(*ptr2 != '\0'){
        ptr2++;
    }

    ptr2--;

    while(*ptr1 != '\0' && ptr2 >= arr2){
        if(*ptr1 != *ptr2){
            *flag = 0;
             break;
        }
        ptr1++;
        ptr2--;
    }

    if(*flag){
        cout<<"The arrays are reverse of each other";
    }
    else{
        cout<<"Arrays are not reverse of each other";
    }

}