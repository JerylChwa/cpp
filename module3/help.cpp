#include <iostream>
using namespace std;

int main() {
    char choice;

    cout << "Help on:\n";
    cout << "1. if\n";
    cout << "2. switch Choose one:\n";
    cin >> choice;

    switch(choice) {
        case '1': 
            cout << "if (statement) else (statement)\n";
        case '2':
            cout << "switch (variable) {case1: __, case2: __}\n";
    }


    return 0;
}