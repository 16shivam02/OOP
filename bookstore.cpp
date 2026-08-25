#include<iostream>
using namespace std;

class Book
{
    public:

    int id;
    string title;
    float price;

    void input()
        {
            cout<<"Enter book title:";
            cin>>title;

            cout<<"Enter book id:";
            cin>>id;

            cout<<"Enter book price:";
            cin>>price;

        }

        void display()
        {
            cout<<"Book Details"<<endl;

            cout<<"Title:"<<title<<endl;
            cout<<"Price:"<<price<<endl;
            cout<<"Book ID:"<<endl;
        }
    
};

int main()
{
    Book b1;
    b1.input();
    b1.display();
    return 0;
}
