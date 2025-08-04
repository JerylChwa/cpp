#include <iostream>
using namespace std;

int main() {
    int total;
    int *ptr; // declares a pointer named ptr pointing to an int
    int val;

    total = 3200; // assign 3200 to total
    ptr = &total; // get address of total
    val = *ptr; // get value at the address
    cout << "Total is " << val;
    return 0;
}