#include <iostream>
using namespace std;

int main() {
    int periods = 0;
    char cur;

    do{
        cout << "Enter a character: " << "\n";
        cin >> cur;
        if (cur == '.') periods++;
    } while (cur != '$');

    cout << "Total number of periods is " << periods;

    return 0;
}