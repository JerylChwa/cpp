#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Enter a number: ";
        cin >> num;
    } while (num != 100);
    
    return 0;
}