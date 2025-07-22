#include <iostream>
using namespace std;

int main() {
    double result, n, d;

    cout << "Enter value: ";
    cin >> n;

    cout << "Enter divisor: ";
    cin >> d;

    if (d != 0) {
        cout << "d not equal to zero so alls g" << "\n";
        result = n / d; 
        cout << n << " / " << d << " is " << result;
    }

    return 0;
}