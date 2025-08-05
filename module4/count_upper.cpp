#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[80];
    int count = 0;
    
    cout << "Enter a word: " << "\n";
    cin >> str;

    for (int i = 0; str[i]; i++) {
        if (isupper(str[i])) count++;
    }
    cout << "There are " << count << " upper case letters";

    return 0;
}