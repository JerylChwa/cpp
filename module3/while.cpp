#include <iostream>
using namespace std;

int main() {
    unsigned char ch;

    ch = 32;

    // ch is an unsigned character
    // can only hold values from 0 through 255
    // when it reaches 255 and incremented, the value wraps around to zero
    // which then serves as a convenient stopping condition.
    while(ch) {
        cout << ch;
        ch++;
    }
    return 0;
}