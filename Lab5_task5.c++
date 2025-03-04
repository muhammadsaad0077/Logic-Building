#include <iostream>
#include <string>
using namespace std;

struct Book{
    string title, author;
    float price;
};

void inputData(Book *books, int);
void displayData(Book *books, int);
void sortBooks(Book *books, int);


int main() {
    int n;
    cout<<"Enter number of Books: ";
    cin>>n;
    Book *books = new Book[n];
    
    inputData(books, n);
    displayData(books, n);
    sortBooks(books, n);
    
    delete[] books;
    return 0;
}

void inputData(Book *books, int n){
    for(int i = 0; i < n; i++){
        cout<<"Enter Book Name: "<<endl;
        cin>>books[i].title;
        cout<<"Enter Author Name: "<<endl;
        cin>>books[i].author;
        cout<<"Enter Book Price: "<<endl;
        cin>>books[i].price;
    }
}

void displayData(Book *books, int n){
    for(int i = 0; i < n; i++){
        cout<<"Book Name: "<<books[i].title<<endl;
       
        cout<<"Book Author: "<<books[i].author<<endl;
       
        cout<<"Book Price: "<<books[i].price<<endl;
        
    }
}

void sortBooks(Book *books, int n){
    Book temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(books[j].price < books[j+1].price){
               temp = books[j];
               books[j] = books[j+1];
               books[j+1] = temp;
            }
        }
    }
    
    cout<<"Expensive Book "<<endl;
    cout<<"Book Name: "<<books[0].title<<endl;
    cout<<"Book Author: "<<books[0].author<<endl;
    cout<<"Book Price: "<<books[0].price<<endl;
}


