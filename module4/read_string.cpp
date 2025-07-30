#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char str[80];

    cout << "Enter a string: ";
    fgets(str, sizeof(str), stdin); // read string from keyboard
    cout << "Here is your string ";
    cout << str;
    
    return 0;
}