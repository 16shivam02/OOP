#include <iostream>
using namespace std;

template <typename T>
T largerValue(T a, T b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main() {
    cout << "Higher marks: " << largerValue(56, 98) << endl;
    cout << "Higher price: " << largerValue(120.55, 285.68) << endl;
    cout << "Higher readings: " << largerValue(876.981, 912.723) << endl; 
    return 0;
}