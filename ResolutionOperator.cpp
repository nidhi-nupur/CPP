#include<iostream>
using namespace std;
int a = 100; // Globally Declared
int main() {
    int a = 10; // Local Declaration
    cout<<"a = "; 
    cout<<a; // a = 10 (Local Accessing)
    cout<<"\na = "; 
    cout<<::a; // a = 100 (Global Access)

}