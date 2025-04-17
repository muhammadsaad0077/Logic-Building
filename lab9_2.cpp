#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book() {} 

    Book(string t, string a) {
        title = t;
        author = a;
    }

    void display() const {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

class Library {
private:
    static const int MAX_BOOKS = 100; 
    Book books[MAX_BOOKS];
    int bookCount;

public:
    Library() {
        bookCount = 0;
    }

    void addBook(string title, string author) {
        if (bookCount < MAX_BOOKS) {
            books[bookCount] = Book(title, author);
            bookCount++;
        } else {
            cout << "Library is full Cannot add more books" << endl;
        }
    }

    void displayBooks() const {
        if (bookCount == 0) {
            cout << "The library has no books" << endl;
        } else {
            cout << "Books in the library" << endl;
            for (int i = 0; i < bookCount; ++i) {
                books[i].display();
            }
        }
    }

    ~Library() {
        cout << "Library is being closed. All books will be removed" << endl;
    }
};

int main() {
    Library lib;
    lib.addBook("Abc", "a");
    lib.addBook("Unk", "b");

    lib.displayBooks();

    return 0; 
}

