#include<iostream>
#include<cstring>
using namespace std;

/*
Write a code that takes two string arrays(C-style string) and checks whether the
two strings are in reverse of each other.
*/

int main(){
	int size = 50;
	char *str_1 = new char[size];
	char *str_2 = new char[size];
	
	cout<<"Enter String ";
	cin.getline(str_1, 50);
	cout<<"Enter Second String ";
	cin.getline(str_2, 50);
	
	int check = 1;
	
	int len1 = strlen(str_1);
	int len2 = strlen(str_2);
	
	if(len1 != len2){
		cout<<"Comparison can't possible! Please Enter Same Length";
	}
	else{
		
		for(int i = 0; i < len1; i++){
		 if(str_1[i] != str_2[len2 - 1 - i]){
			check = 0;
			break;
		 }		
	    }
	
    	if(check){
		cout<<"The strings are reversed of each other";
    	}
    	else{
		cout<<"Strings are not reverse of each other";
	    }
	
    }
    delete[] str_1;
    delete[] str_2;
    
    
    str_1 = NULL;
    str_2 = NULL;
    
	return 0;
	
}
