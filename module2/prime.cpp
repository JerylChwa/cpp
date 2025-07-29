#include <iostream>
using namespace std;

int main() {

    cout << 2 << "\n";
    for (int i = 3; i <= 100; ++i) {
        // cout << "i is " << i << "\n";
        // for each number i, we just check if it has a number that is not 1 and not itself and can divide it
        bool prime = true;

        for (int j = 2; j < i; ++j) {
            // cout << "j is " << j << "\n";
            if (i % j == 0) { // not a prime number
                prime = false;
                break;;
            }
        }
        if (prime) {
            cout << i << "\n";
        }
        prime = true;
        
    }

    return 0;
}