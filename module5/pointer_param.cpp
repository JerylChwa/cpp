#include <iostream>
using namespace std;

void f(int *j); // f() declares a pointer parameter

int main() {
    int i;
    // int *p;

    // p = &i; // p now points to i
    f(&i);
    cout << "i now is " << i;

    return 0;

}


void f(int *j) {
    *j = 100;
}