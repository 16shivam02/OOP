#include <iostream>
using namespace std;

class employee{
    public:
    int empid;
    string name;
    float salary;

    employee(int e,string n,float s){
        cout << "Connstructor is called\n";
        empid = e;
        name = n;
        salary = s;
      
    }

    void display(){
        cout << "Employee ID: " << empid << "\n";
        cout << "Employee name: " << name << "\n";
        cout << "Employee salary: " << salary << "\n";
    }

    ~employee(){
        cout << "Destructor is called\n";
    }
};

int main() {
    employee e1(101,"sk",10000.00);
    e1.display();
    return 0;
}