#include <iostream>
using namespace std;

class employee
{
    public:
    int emp_id;
    string name;
    float salary;

    employee(int i,string n,float s)
    {
       cout << "Constructor is called" << endl;
       emp_id = i;
       name = n;
       salary = s;       
    }

    void display()
    {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee name: " << name << endl;
        cout << "Employee salary: " << salary << endl;
    }

    ~employee()
    {
        cout << "Destructor is called";
    }

 
};

int main() {
    employee e1(101,"sk",1000);
    e1.display();  
    return 0;
}