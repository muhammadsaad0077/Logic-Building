#include<iostream>
using namespace std;
void checkReverse(char *, char *);
int lengthCheck(char *);

int main(){
    char str1[100];
    char str2[100];

    cout<<"Enter First String ";
    cin.getline(str1, 100);
    cout<<"Enter Second String ";
    cin.getline(str2, 100);

    checkReverse(str1, str2);

}

void checkReverse(char *str1, char *str2){
    int check = 1;
    int len1, len2;
    len1 = lengthCheck(str1);
    len2 = lengthCheck(str2);
    cout<<len1<<endl;
    cout<<len2<<endl;

    if(len1 != len2){
        cout<<"Checking of reverse array is not possible"<<endl;
        return;
    }

    for(int i = 0; i < len1; i++){
        if(*(str1 + i) != *(str2 + len1 - 1 - i)){
            check = 0;
            break;
        }
    }

    if(check){
        cout<<"Strings are the reverse of each other";
    }
    else{
        cout<<"Strings are NOT reverse of each other";
    }

    /* Logic of program
    S - S  str1[0] - str2[3]
    a - a  str1[1] - str2[2]
    a - a  str1[2] - str2[1]
    d - d  str1[3] - str2[0]
    */
}

int lengthCheck(char *str){
    int len = 0;
    while(*(str + len) != '\0'){
        len++;
    }
    return len;
}