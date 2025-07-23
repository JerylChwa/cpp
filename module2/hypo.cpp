#include <iostream>
#include <cmath> // needed for the sqrt() function
using namespace std;

int main() {
    double x, y, z;

    x = 5.0;
    y = 4.0;

    z = sqrt(x*x + y*y);

    cout << "Hypo is " << z; 
    
    return 0;
}