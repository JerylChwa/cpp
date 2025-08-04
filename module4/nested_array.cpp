#include <iostream>
using namespace std;

int main() {
    int i, j;
    int sqrs[10][2] = {
        {1, 1},
        {2, 4},
        {3, 9},
        {4, 16},
        {5, 25},
        {6, 36},
        {7, 49},
        {8, 64},
        {9, 81},
        {10, 100}
    };

    cout << "Enter a number between 1 and 10: ";
    cin >> i;

    cout << "The square of your number is " << sqrs[i-1][1];

    return 0;
}