#include <iostream>
#include <string>
using namespace std;

class book 
{
    public:
    int bookid;
    string book_title;
    float price;

    book()
    {
        bookid = 0;
        book_title = "nothing";
        price = 0.0;
    }

    book(int i,string t,float p)
    {
        bookid = i;
        book_title = t;
        price = p;
    }

    void display()
    {
        cout<<"BookID:"<<bookid;
        cout<<"Book title:"<<book_title;
        cout<<"Book Price:"<<price;
    }
};

int main() {
    book b1;
    b1.display();
    book b2(1001,"OOP",500);
    b2.display();
    return 0;
}