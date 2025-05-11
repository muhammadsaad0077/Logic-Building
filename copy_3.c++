#include<iostream>
#include<cstring> // for strcpy
using namespace std;

class Book {
private:
    char* title;
    char* author;

public:
    // Parameterized Constructor
    Book(const char* t = "", const char* a = "") {
        title = new char[strlen(t) + 1];
        strcpy(title, t);

        author = new char[strlen(a) + 1];
        strcpy(author, a);
    }

    // Deep Copy Constructor
    Book(const Book& other) {
        title = new char[strlen(other.title) + 1];
        strcpy(title, other.title);

        author = new char[strlen(other.author) + 1];
        strcpy(author, other.author);
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }

    // Destructor
    ~Book() {
        delete[] title;
    }

};

class Library:public Book{
    private:
        int* shelfNo;

    public:

        Library(char* title, char* author, int sN): Book(title, author){
            shelfNo = new int;
            *shelfNo = sN;
        }

        Library(Library& l):Book(l){
            shelfNo = new int;
            *shelfNo = *(l.shelfNo);
        }

        void display(){
            cout<<"Shelf No: "<<*shelfNo<<endl;
            Book::display();
        }

        ~Library(){
        delete shelfNo;
        }

};

int main(){
    Library lib("Atomic Habits", "James", 404);
    Library lib2 = lib;
    lib.display();
    lib2.display();
}
