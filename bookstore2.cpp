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
        cout<<"Enter Employee Name:";
        cin.ignore();
        getline(cin,name);

        cout<<"Enter Employee ID:";
        cin>>id;

        cout<<"Enter Employee Salary:";
        cin>>salary;
    }

    void display()
    {
        cout<<"Employee Details:"<<endl;

        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
} ;


int main() 
{
   employee e1;
   e1.input();
   e1.display();
   
   employee e2;
    e2.input();
    e2.display();
    return 0;
}