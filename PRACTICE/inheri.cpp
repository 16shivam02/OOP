#include <iostream>
using namespace std;

class security{
    public:
    void showSecurity(){
        cout << "Security: Camera is on, alarm is on\n";
    }
};

class energy{
    public:
    void showEnergy(){
        cout << "Energy: Units used: 120\n";
    }
};

class homeSecurity : public security,public energy{

};

int main() {
    homeSecurity hc1;
    hc1.showSecurity();
    hc1.showEnergy();
    return 0;
}