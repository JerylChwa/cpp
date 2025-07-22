#include <iostream>
using namespace std;

int main() {
    // user inputs jovian years
    // return earth years = jovain / 12
    int jovian;
    long earth;

    cout << "Enter number of jovian years : " << "\n";
    cin >> jovian;
    earth = jovian / 12;
    cout << "Number of earth years : " << "\n";
    cout << earth;

    return 0;
}