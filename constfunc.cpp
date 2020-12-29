#include<iostream>
using namespace std;

class Book {
    public: 
    string title; 
    string author;
    int pages;
    Book(string ntitle , string nauthor, int npages)
    {
        title = ntitle;
        author = nauthor;
        pages = npages;
    }

    bool numpage(){
        if(pages >= 300){
            return true;
        }
        return false;
    }
};

int main()
{
     Book book1("harry potter","jk rowling",500);
     Book book2("sdfgdg","dsgsgd",150);
     cout<< book1.title << endl;
     cout << book1.numpage() << endl;
     cout<< book2.title << endl;
     cout << book2.numpage();

    return 0;

}