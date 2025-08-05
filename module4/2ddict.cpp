#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // two-dimensional array of char pointers which is used to point to pairs of strings
    // when compiler encounters a string constant, it stores the program's string table and generates a pointer to the string
    char *dictionary[][2] = {
        "pencil", "A writing instrument.",
        "", ""
    };
    char word[80];
    int i;

    cout << "Enter word: ";
    cin >> word;
    
    // array indices specify a pointer to a string
    // * obtains the character at that location
    for (i=0; *dictionary[i][0]; i++) {
        if (!strcmp(dictionary[i][0], word)) {
            cout << dictionary[i][1] << "\n";
            break; 
        }
    }

    if (!*dictionary[i][0])
        cout << word << " not found. \n";
    
    return 0;
}