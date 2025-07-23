#include <iostream>
#include <cmath>
using namespace std;
/*

C++ does not define a logical operator that performs an exclusive-OR operation XOR
We can manually construct an XOR operator using this logic
(p || q) && !(p && q)

*/

int main() {
    bool p, q;

    cout << "Enter p: ";
    cin >> p;
    cout << "Enter q: ";
    cin >> q;

    cout << p << " XOR " << q << " is " <<
    ((p || q) && !(p&&q)) << "\n";


    return 0;
}