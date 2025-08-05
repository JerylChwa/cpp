#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    char str1[80];
    char str2[80];

    cout << "Enter first word: " << "\n";
    cin >> str1;
    cout << "Enter second word: " << "\n";
    cin >> str2;

    if (strlen(str1) == strlen(str2)) {
        for (int i = 0; str1[i]; i++) {
            if (tolower(str1[i]) != tolower(str2[i])) {
                cout << "They are not the same" << "\n";
                return 0;
            }

        }
        cout << "They are the same yay" << "\n";
    } else {
        cout << "They are not the same";
    }



    return 0;


}