#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int a = 10;
    float b = 24.45;
    double c = 35.5;
    char e = '@';
    cout << typeid(a).name() << endl; // i
    cout << typeid(b).name() << endl; // f
    cout << typeid(c).name() << endl; // d
    cout << typeid(e).name() << endl; // e
}