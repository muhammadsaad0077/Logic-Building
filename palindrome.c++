#include<iostream>
using namespace std;

int main(){
    char str[100];
    char lastStr[100];
    cout<<"Enter string to check whether it is palindrome or not : ";
    cin.getline(str, 100);
    int len = 0;

    int i = 0, j = 0;

    while(str[i] != '\0'){
        if(str[i] != ' '){
            lastStr[j] = str[i];
            j++;
        }
        i++;
    }

    lastStr[j] = '\0';


    while(lastStr[len] != '\0'){
        len++;
    }

    cout<<len<<endl;

    int count = 0;

    for(int i = 0; i < len; i++){
        if(lastStr[len - 1 - i] == lastStr[i]){
            count++;
        }
    }

    if(count == len){
        cout<<"The string is palindrome ";
    }
    else{
        cout<<"The string is not palindrome ";
    }

    // d  -  s
    // a  -  a
}