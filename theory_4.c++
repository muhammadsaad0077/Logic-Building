#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
    string title;
    string author;
    
};

int main() {
    Book *b = new Book;
    b->title = "Atomic Habits";
    b->author = "James";
    
    cout<<"Book Title: "<<b->title<<endl;
    cout<<"Book Author: "<<b->author<<endl;
    
    delete b;
    b = nullptr;

    return 0;
}
