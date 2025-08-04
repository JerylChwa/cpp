#include <iostream>
using namespace std;

int main() {
    int *p, num;

    p = &num; // pointer p points to address of num

    *p = 100; // assign num the value of 100 through p
    cout << num << ' ';
    (*p)++;
    cout << num << ' '; // increment num through p
    (*p)--;
    cout << num << '\n'; // decrement num through p

    return 0;
}