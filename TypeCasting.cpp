#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
    int a = 10;
    double b = 3.14;

    // Implicit TypeCasting 
    double a2 = a;
    cout << a2 << endl;
    int b2 = b; // data loss
    cout << b2 << endl; // output : 3 instead of 3.14.

    // Explicit TypeCasting
    double a3 = (double)a;
    cout << a3 << endl;
    int b3 = (int)b; 
    cout << b3 << endl;
}
