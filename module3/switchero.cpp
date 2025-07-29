#include <iostream>
using namespace std;

int main() {
    int i;

    for (i = 0; i < 2; i++) {
        switch(i) {
            case 0: 
                cout << "This is 0";
                break;
            case 1: 
                cout << "This is 1";
                break;
        }
        cout << "\n";
    }
    return 0;
}