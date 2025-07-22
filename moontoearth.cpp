#include <iostream>
using namespace std;

int main() {
    double moon_weight, earth_weight;
    int count;

    count = 0;

    for (earth_weight = 1; earth_weight <= 100.0; earth_weight++) {
        moon_weight = 0.17 * earth_weight;
        cout << earth_weight << " earthweight is " << moon_weight << " moonweight" << "\n";
        count++;
        if (count == 25) {
            cout << "\n";
            count = 0;
        }
    }
    return 0;
}