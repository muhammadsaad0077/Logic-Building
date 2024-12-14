#include<iostream>
using namespace std;

void subString(char *, char *, int, int);

int main(){
    char str[] = "Working with string is Fun!";
    int start = 3, length = 5;
    char result[20];

    subString(str, result, start, length);
    cout<<result;
}

void subString(char *str, char *result, int start, int length){
    int j = 0;

    for(int i = start; i < length + start; i++){
        *(result + j) = *(str + i);
        j++;
    }

    *(result + j) = '\0';

}