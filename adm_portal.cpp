#include <iostream>
using namespace std;


class student 
    {
        public:
        string name;
        int dob;

        student (string name,int dob)
        {
            this->name = name;
            this->dob = dob;
        }

        void display()
        {
            cout << "Student name: " << name << endl;
            cout << "Student's date of birth: " << dob << endl;
        }
    };

int main()
    {
    student s1("Shivam",16);
    s1.display();
     return 0;
    }

    
