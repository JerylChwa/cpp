#include <iostream>
using namespace std;
/*

This is a simple C++ program.

*/

// A C++ program begins at main()
int main()
{   
    int ivar; // this declares an int variable
    double dvar; // this declares a floating point variable

    ivar = 100;
    dvar = 100.0;

    cout << "Value of ivar is " << ivar << "\n";
    cout << "Value of dvar is " << dvar << "\n";
    cout << "\n";

    ivar = ivar / 3;
    dvar = dvar / 3.0;

    cout << "ivar after division " << ivar << "\n";
    cout << "dvar after division " << dvar << "\n";
}