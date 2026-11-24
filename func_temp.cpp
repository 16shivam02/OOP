#include <iostream>
using namespace std;

template <typename T>

void swap(T a, T b){
    cout << "Values before swap: " << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b : " << b << endl;

    T c;
    c = a;
    a = b;
    b = c;

    cout << "Values after swap: " << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
} 

int main() {
    swap(3,6);
    return 0;
}