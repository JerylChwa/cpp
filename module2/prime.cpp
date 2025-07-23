#include <iostream>
using namespace std;

int main() {

    cout << 2 << "\n";
    for (int i = 3; i <= 100; ++i) {
        // for each number i, we just check if it has a number that is not 1 and not itself and can divide it
        bool prime = true;
        for (int j = 2; j < i; ++j) {
            if (i % j != 0) { // not a prime number
                prime = false;
                continue;
            }
        }
        if (prime) {
            cout << i << "\n";
        }
        prime = true;
        
    }

    return 0;
}