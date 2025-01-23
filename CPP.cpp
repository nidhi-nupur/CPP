// ---- FIRST C++ PROGRAM ---- //
#include <iostream>

using namespace std;

namespace First
{
    void func()
    {
        cout << "Nidhi";
    }
}
namespace Second
{
    void func()
    {
        cout << "\tNupur";
    }
}

int main()
{
    First::func();
    Second::func();
}