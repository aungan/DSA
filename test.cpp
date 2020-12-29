#include<iostream>
using namespace std;

//making a class

class books
{
private:
    string title;
    string author;
    int page_nums;

public:

void setData(string t, string a, int pn)
{
    title = t;
    author = a;
    page_nums = pn;
}
void display(){
    cout<<"title of the book" << title <<endl;
    cout <<"author of the book" << author << endl;
    cout << "pages in the book "<< page_nums << endl;


}
    books();
    ~books();
};

books::books(/* args */)
{
}

books::~books()
{
}


int main()
{
    books book1, book2;
    book1.setData("harry potter","jk rowling",500);
    book1.display();

}