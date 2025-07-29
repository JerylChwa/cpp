#include <iostream>
using namespace std;

int main() {
    int changes = 0;
    char cur;
    
    do {
        cout << "Enter char: " << "\n";
        cin >> cur;
        if  (cur >= 'a' && cur <= 'z') {
            cur -= 32;
            changes++;
        } else if (cur >= 'A' && cur <='Z') {
            cur += 32;
            changes++;
        }
    } while (cur != '.');

    cout << "Number of case changes is " << changes;
    return 0;
}