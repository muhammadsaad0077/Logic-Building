#include<iostream>
#include<cstring>
using namespace std;

struct Book{
    char title[50];
    char author[30];
    int price;
};

int main(){
    Book books;
    
    strcpy(books.title, "Atomic Habits");
    strcpy(books.author, "James Clear");
    books.price = 4000;
    
    cout<<"Book Name: "<<books.title<<endl;
    cout<<"Author Name: "<<books.author<<endl;
    cout<<"Price: "<<books.price<<endl;
    
}