#include <iostream>
#include <string>
using namespace std;

class book{
    public:
    int book_id;
    string name;
    float price;

    //default constructor
    book(){
        book_id = 1;
        name = "oop";
        price = 100.0; 
    }

    //parametrized constructor
    book(int id,string n,float p){
        book_id = id;
        name = n;
        price =  p;
    }

    void display(){
        cout << "\n---BOOK DETAILS---\n";
        cout << "Book ID: " << book_id << "\n";
        cout << "Book name: " << name << "\n";
        cout << "Book price: " << price << "\n";
    }
};

int main() {
    book b1;
    b1.display();  
    return 0;
}