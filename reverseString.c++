// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void reverse(char *str);

int main() {
    
    char str[] = "Pakistans";
    cout<<str;
    
    reverse(str);

    cout<<"Reverse string is "<<str<<endl;

    return 0;
}

void reverse(char *str){
    int len = 0;
    

    while(str[len] != '\0'){
        len++;
    }

    for(int i = 0; i < len/2; i++){
        char temp = str[i];   // s
        str[i] = str[len - i - 1];  //  d
        str[len - i - 1] = temp;  // 
    }

    
}