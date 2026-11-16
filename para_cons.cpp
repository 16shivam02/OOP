#include <iostream>
using namespace std;

class book{
    public:
    int bookid;
    string author;
    float price;

    book(int id,string a,float p){
        bookid = id;
        author = a;
        price = p;
    }

    void display(){
        cout << "---BOOK DETAILS---\n";
        cout << "Book ID: " << bookid << "\n";
        cout << "Book author: " << author << "\n";
        cout << "Book price: " << price << "\n";
    }
};

int main() {
    book b1(101,"OOP", 100.0);
    b1.display();  
    return 0;
}