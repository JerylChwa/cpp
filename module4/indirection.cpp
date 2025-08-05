#include <iostream>
using namespace std;

int main() {
    int x, *p, **q;
    x = 10;
    p = &x;
    q = &p;

    cout << **q; // prints the value of x
    
    return 0;
}