#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int rno;
    static string clg_name;

    void show(){
        cout << "Name: " << name << "\n";
        cout << "Roll no: " << rno << "\n";
        cout << "College name: " << clg_name << "\n";
    } 
};

string student::clg_name = "MIT ADT";

int main() {
    student s1;
    s1.rno = 23;
    s1.name = "sk";
    s1.clg_name = "ABC";
    s1.show();

    return 0;
}