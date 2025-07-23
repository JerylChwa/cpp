#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    double f; // holds the length in feet
    double m; // holds the conversion to meters
    int counter;
    int test;

    counter = 0;

    for (f=1.0; f<=100.0; f++) {
        m = f / 3.28;
        cout << f << " feet is converted to " << m << " meters" << "\n";
        counter++;
        if (counter == 25) {
            cout << "\n";
            counter = 0;
        }

    }
    test = -10;
    cout << abs(test);
    return 0;

}