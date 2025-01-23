/* Write a C++ program that performs the following:

1. Void Data Type:

Create a void function called printMessage that takes no parameters and simply prints a welcome message: "Welcome to oops lab!".

2. Type modifiers
Write a c++ program to declare int, short int, long int, signed int, unsigned int, signed char, unsigned char and find the size of each of the above using size_of and print it's size in Bytes

3. Type Casting:

i) Write a c++ program to store two integers 1000000007 and 2000000003 and print it's multiplication. 
 
ii) Perform implicit type casting by assigning an int value to a float variable and print the result.


iii) Write a function in c++ to find max of three integers. Define 3 float/double and
Perform explicit type casting by converting a float value to an int using a cast operator and use this to find the max integers value of three 

4. Constants:

Define a constant PI with a value of 3.14159 using the const keyword and use it to calculate the circumference of a circle. Try to modify the value of PI and explain what happens */

#include<iostream>
using namespace std;


/* 1. Void Data Type: */
/* void printMessage() {
    cout << "Welcome to OOP lab" << endl;
}
int main() {
    printMessage();
} */


/* 2. Type modifiers */
/* int main() {
    int a1;
    short int a2;
    long int a3;
    signed int a4;
    unsigned int a5;
    signed char c1;
    unsigned char c2;
    cout << "Size of int : " << endl;
    cout << sizeof(a1) << endl;
    cout << "\nSize of short int : " << endl;
    cout << sizeof(a2) << endl;
    cout << "\nSize of long int : " << endl;
    cout << sizeof(a3) << endl;
    cout << "\nSize of signed int : " << endl;
    cout << sizeof(a4) << endl;
    cout << "\nSize of unsigned int : " << endl;
    cout << sizeof(a5) << endl;
    cout << "\nSize of signed char : " << endl;
    cout << sizeof(c1) << endl;
    cout << "\nSize of unsigned char : " << endl;
    cout << sizeof(c2) << endl;
    return 0;
} */


/* 3. Type Casting: 
(i)*/
/* int main() {
    int a = 1000000007;
    int b = 2000000003;
    int c = a * b;
    long int a1 = (long int)a;
    long int b1 = (long int)b;
    long int d = a1 * b1;
    cout << "a * b (int) : " << endl;
    cout << c << endl; // 1141860885
    cout << "a * b : (long int) " << endl;
    cout << d << endl; // 2000000017000000021 // showing compiling error
    return 0;
} */

/* (ii) */
/* int main() {
    int a = 10;
    int b = 20;
    float c = a * b;
    cout << "a * b : " << endl;
    cout << c << endl; // 200 (Implicit Type Casting)
    return 0;
} */

/* (iii) */
/* float maxThreeNumber(float a, float b, float c) {
    float var1 = max(a, b);
    float ans = max(var1, c);
    return ans;
}
int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    cout << "Maximum of the three numbers is : " << maxThreeNumber(float(a), float(b), float(c)) << endl;
    cout << "Maximum of the three numbers is : " << maxThreeNumber(double(a), double(b), double(c)) << endl;
} */

/* 4. Constants: */
int main() {
    const double PI = 3.14159;
    double r = 10;
    double area = PI * r * r;
    cout << "Value of PI is : " << PI << endl;
    //PI = 468.467; // error Because PI is declared as a const, which makes it read-only. The value of a constant variable cannot be changed once it is initialized.
    cout << "Value of PI is : " << PI << endl;
    cout << "Area of circle is : " << area << endl;
    return 0;
}