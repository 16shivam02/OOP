#include <iostream>
#include <string>
using namespace std;

class employee
{
    public:
    string name;
    int id;
    int salary;

    void input()
    {
        cout<<"Enter Employee Name: ";
        //cin.ignore();
        getline(cin,name);

        cout<<"Enter Employee ID: ";
        cin>>id;

        cout<<"Enter Employee Salary: ";
        cin>>salary;
        cin.ignore();
    }

    void display()
    {
        cout<<"Employee Details:"<<endl;

        cout<<"Employee Name:"<<name<<endl;
        cout<<"Employee ID:"<<id<<endl;
        cout<<"Employee Salary:"<<salary<<endl;
    }
} ;


int main() 
{
   employee e1;
   employee e2;
   e1.input();
   e1.display();
    e2.input();
    e2.display();
    return 0;
}