/* Create a C++ program that accepts two integers, a and b, from the user. The program should display the results of the following operations:

1. Arithmetic Operations: Addition, Subtraction, Multiplication, Division, and Modulus.


2. Relational Operations: Compare a and b using ==, !=, <, >, <=, and >=.


3. Logical Operations: Logical AND (&&), Logical OR (||), and Logical NOT (!).


4. Bitwise Operations: AND (&), OR (|), XOR (^), Left Shift (<<), and Right Shift (>>).


5. Assignment Operations: Demonstrate compound assignments like += and -=.


6. Ternary Operator: Find the maximum of the two numbers using the ternary operator.

Input:

The program should take two integers as input.

Example Input:

Enter two integers (a and b):  
10 3

Output:

Example Output:

Arithmetic Operations:  
Addition (a + b): 13  
Subtraction (a - b): 7  
Multiplication (a * b): 30  
Division (a / b): 3  
Modulus (a % b): 1  

Relational Operations:  
Is a equal to b? (a == b): 0  
Is a not equal to b? (a != b): 1  
Is a greater than b? (a > b): 1  
Is a less than b? (a < b): 0  
Is a greater than or equal to b? (a >= b): 1  
Is a less than or equal to b? (a <= b): 0  

Logical Operations:  
Logical AND (a > 0 && b > 0): 1  
Logical OR (a > 0 || b > 0): 1  
Logical NOT (!a): 0  

Bitwise Operations:  
Bitwise AND (a & b): 2  
Bitwise OR (a | b): 11  
Bitwise XOR (a ^ b): 9  
Bitwise Left Shift (a << 1): 20  
Bitwise Right Shift (a >> 1): 5  

Assignment Operations:  
Assign c = a: 10  
c += b (c = c + b): 13  
c -= b (c = c - b): 10  

Ternary Operator:  
Max of a and b: 10
 */

#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "a : " << ends;
    cin >> a;
    cout << "b : " << ends;
    cin >> b;

    // 1. Arithmetic Operations: Addition, Subtraction, Multiplication, Division, and Modulus.
    /* cout << "Add : " << a << " + " << b << " = " << a + b << endl;
    cout << "Substract : " << a << " - " << b << " = " << a - b << endl;
    cout << "Multiply : " << a << " * " << b << " = " << a * b << endl;
    cout << "Divide : " << a << " / " << b << " = " << a / b << endl;
    cout << "Remainder : " << a << " % " << b << " = " << a % b << endl; */


    // 2. Relational Operations: Compare a and b using ==, !=, <, >, <=, and >=.
    /* cout << a << " == " << b << " = " << ((a == b) ? "True" : "False") << endl;
    cout << a << " != " << b << " = " << ((a != b) ? "True" : "False") << endl;
    cout << a << " < " << b << " = " << ((a < b) ? "True" : "False") << endl;
    cout << a << " <= " << b << " = " << ((a <= b) ? "True" : "False") << endl;
    cout << a << " >= " << b << " = " << ((a >= b) ? "True" : "False") << endl; */


    // 3. Logical Operations: Logical AND (&&), Logical OR (||), and Logical NOT (!).
    /* cout << a << " && " << b << " : " << (a && b) << endl;
    cout << a << " || " << b << " : " << (a || b) << endl; */
    // cout << a << " ! " << b << " : " << (a ! b) << endl; // Showing error

    // 4. Bitwise Operations: AND (&), OR (|), XOR (^), Left Shift (<<), and Right Shift (>>).
    /* cout << a << " & " << b << " : " << (a & b) << endl;
    cout << a << " | " << b << " : " << (a | b) << endl;
    cout << a << " ^ " << b << " : " << (a ^ b) << endl;
    cout << a << " << " << b << " : " << (a << b) << endl;
    cout << a << " >> " << b << " : " << (a >> b) << endl; */

    // 5. Assignment Operations: Demonstrate compound assignments like += and -=.
    /* cout << "+= : " << (a += 10) << endl;
    cout << "-= : " << (a -= 10) << endl;
    cout << "*= : " << (b *= 10) << endl;
    cout << "/= : " << (b /= 10) << endl;
    cout << "%= : " << (b %= 10) << endl; */

    // 6. Ternary Operator: Find the maximum of the two numbers using the ternary operator.
    cout << a << " > " << b << " = " << ((a > b) ? "True" : "False") << endl;
    cout << a << " < " << b << " = " << ((a < b) ? "True" : "False") << endl;
}
