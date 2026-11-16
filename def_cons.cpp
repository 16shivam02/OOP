#include <iostream>
using namespace std;

class book{
    public:
    int bookid;
    string author;
    float price;

    book(){
        bookid = 1;
        author = "jk";
        price = 50.0;
    }

    void display(){
        cout << "---BOOK DETAILS---\n";
        cout << "Book ID: " << bookid << "\n";
        cout << "Book author: "  << author << "\n";
        cout << "Book price: " << price << "\n";
    }
};

int main() {
    book b1;
    b1.display();  
    return 0;
}