#include <iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    long contact;

    void personDetails(){
        cout << "Enter name: " << "\n";
        cin >> name;
        
        cout << "Enter age: " << "\n";
        cin >> age;

        cout << "Enter contact: " << "\n";
        cin >> contact;
    }
        void displayPerson(){
            cout << "---Person Details---" << "\n";
            cout << "Name of person: " << name << "\n";
            cout << "Age of person: "  << age << "\n" ;
            cout << "Contact of person: " << contact << "\n";
        }
    
};

class employee : public person{
    public: 
    int emp_id;
    string dep;
    double salary;

    void employeeDetails(){
        cout << "Enter employee ID: \n";
        cin >> emp_id;

        cout << "Enter Department: \n";
        cin >> dep;

        cout << "Enter salary: \n";
        cin >> salary;
    }
        void dsiplayEmployee(){
            cout << "\n---Employee Details---\n";
            cout << "Employee ID: " << emp_id << "\n";
            cout << "Department: " << dep << "\n";
            cout << "Salary: " << salary << "\n";
        }
    
};

class manager : public employee{
    public:
    int teamSize;
    double bonus;

    void managerDetails(){
        cout << "Enter team size: \n";
        cin >> teamSize;
        
        cout << "Enter bonus amount: \n";
        cin >> bonus;
    }

    void displayManager(){
        cout << "Team Size: " << teamSize << "\n";
        cout << "Bonus Amount: " << bonus << "\n";
    }
};

int main() {
    manager m1;
    m1.managerDetails();
    cout << "---MANAGER DETAILS---\n";
    m1.displayManager();
    
    return 0;
}