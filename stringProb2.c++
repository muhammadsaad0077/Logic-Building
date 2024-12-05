#include<iostream>
using namespace std;

/*  Problem statement

Declares
and initializes two strings without knowing their sizes in advance.
Calculates
the sizes (lengths) of these two strings without using any built-in STRING
functions.
Adds
their sizes and declares a third string with that total size, including
space for a space character between the two strings and the null
terminator.
Passes
the result string, string 1, and string 2 to a function.
In
the function, reverses string 1 and string 2 and then combine them both into
the result string, inserting a space character between them.
Displays
the combined string in the main function after the function call.
Do
not use any built-in string handling functions (like those in
<string.h>).



*/

void printMemory(char *str);

int length(char *str);

void combine(char *str1, char *str2, char *str3);

void reverse(char *str, int len);

int main(){

    char str1[] = "Hello";
    char str2[] = "World";

    int len1 = length(str1);
    int len2 = length(str2);

    int sizeof3 = len1 + len2 + 2;

    char str3[sizeof3];

    

    combine(str1, str2, str3);

    cout<<str3;

   // cout << "Memory content of str3:" << endl;
   // printMemory(str3);







}


int length(char *str){
    int len = 0;
    char *ptr = str;

    while(*ptr != '\0'){
        len++;
        ptr++;
    }

    return len;
    
}


void reverse(char *str, int len){
    for(int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}


void combine(char *str1, char *str2, char *str3){

    int len1 = length(str1);
    int len2 = length(str2);

    int size = len1 + len2 + 1;

    reverse(str1, len1);
    reverse(str2, len2);
    

    int i = 0;


    while (*str1 != '\0') {
        str3[i++] = *str1;
        str1++;
    }

    

    // Insert a space
    str3[i++] = ' ';


    // Copy str2 into str3
    while (*str2 != '\0') {
        str3[i++] = *str2;
        str2++;
    }

    // Add null terminator at the end
    str3[i] = '\0';




}


void printMemory(char *str) {
    while (*str != '\0') {
        cout << "Address: " << (void*)str << " Value: " << *str << endl;
        str++;
    }
    // Print null terminator's memory
    cout << "Address: " << (void*)str << " Value: \\0" << endl;
}