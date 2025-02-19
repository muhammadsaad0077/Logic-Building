#include<iostream>
#include<string>
using namespace std;

struct Book{
    string title;
    string author;
    int pages;
    float price;
};

int main(){
    
    Book book;
    cout<<"Enter Book Title ";
    getline(cin, book.title);
    
    cout<<"Enter Author Name ";
    getline(cin, book.author);
    
    cout<<"Enter total number of pages ";
    cin>>book.pages;
    
    cout<<"Enter Price of Book ";
    cin>>book.price;
    
    cout<<"Book Name: "<<book.title<<endl;
    cout<<"Author Name: "<<book.author<<endl;
    cout<<"Total Book Pages: "<<book.pages<<endl;
    cout<<"Book Price: "<<book.price<<endl;

    return 0;
}
