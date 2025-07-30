#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {

    char str[80];
    int i;

    strcpy(str, "test string");

    for (i=0; str[i]; i++) str[i] = toupper(str[i]);
    cout << str;
    return 0;

}