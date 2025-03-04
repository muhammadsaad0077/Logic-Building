#include <iostream>
#include <string>
using namespace std;

struct Book{
    string title, author;
    int price;
};


int main() {
    Book book[5];
    
    for(int i = 0; i < 5; i++){
        cout<<"Enter Book Title: "<<endl;
        cin>>book[i].title;
        cout<<"Enter Book Author: "<<endl;
        cin>>book[i].author;
        cout<<"Enter Price: "<<endl;
        cin>>book[i].price;
    }
    
    for(int i = 0; i < 5; i++){
      if(book[i].price > 500){
        cout<<"Book Title: "<<book[i].title<<endl;
        cout<<"Book Author: "<<book[i].author<<endl;
        cout<<"Book Price: "<<book[i].price<<endl;
      }
      else{
          continue;
      }
    }
    
    return 0;
}


