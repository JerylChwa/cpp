#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        do {
            cout << "Help on:\n";
            cout << "1. if\n";
            cout << "2. switch Choose one:\n";
            cin >> choice;
            if (choice == 'q') break;
        } while (choice < '1' || choice > '2');


        switch(choice) {
            case '1': 
                cout << "\n\nif (statement) else (statement)\n\n";
                break;
            case '2':
                cout << "\n\nswitch (variable) {case1: __, case2: __}\n\n";
                break;
        }
    } while (choice != 'q');

    return 0;
}