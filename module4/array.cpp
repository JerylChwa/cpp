#include <iostream>
using namespace std;

int main() {
    int sample[10]; // reserves 10 elements
    int t;

    // load the array
    for (t=0; t<10; t++) sample[t] = t;

    // display the array
    for (t=0; t<10; t++){
        cout << "Element: " << sample[t] << "\n";
    }

    return 0;
}