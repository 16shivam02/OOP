#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int rno;
    static string clg_name;

    static void display(){
        cout << "College name: " << clg_name << "\n";
    }

    void show(){
        cout << "Name: " << name << "\n";
        cout << "Roll no: " << rno << "\n";
    }
};

string student::clg_name = "MIT SOAI";

int main() {
    student s1;
    s1.name = "sk";
    s1.rno = 23;
    s1.show();
    student::display();
    return 0;
}