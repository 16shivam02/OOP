#include <iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;
    long contact;

    void personDetails(){
        cout << "Enter name: \n";
        cin >> name;

        cout << "Enter age: \n";
        cin >> age;

        cout << "Enter contact: \n";
        cin >> contact;
    }

    void displayPerson(){
        cout << "---STUDENT DETAILS---" << "\n";
        cout << "Name of student: " << name << "\n";
        cout << "Age of student: " << age << "\n";
        cout << "contact of student: " << contact << "\n";
    }

};

class student : public person{
    public:
    int rno;
    string branch;

    void studentDetails(){
        cout << "Enter roll number: " << "\n";
        cin >> rno;

        cout << "Enter your branch: " << "\n";
        cin >> branch;
    }

    void displayStudent(){
        cout << "---STUDENT DETAIALS---" << "\n";
        cout << "Roll no: " << rno << "\n";
        cout << "Branch: " << branch << "\n";
    }
    
};


int main() {
    student s1;
    s1.personDetails();
    s1.displayPerson();
    s1.studentDetails();
    s1.displayStudent();

    return 0;
}