#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {

    char s1[80], s2[80];
    //strcpy(to, from)
    strcpy(s1, "C++");
    strcpy(s2, " is power programming.");
    cout << "lengths: " << '\n';
    
    //strcmp(s1, s2) if s1 > s2, returns positive, if s1 < s2, returns negative, if s1 == s2, returns 0
    if (!strcmp(s1, s2))
        cout << "The strings are equal\n";
    else cout << "not equal\n";
        //strcat(s1, s2), appends s2 to the end of s1, s2 is unchanged, ensure that s1 is large enough to hold its original contents and those of s2
        strcat(s1, s2);
    
    cout << s1 << '\n';
    strcpy(s2, s1);
    cout << s1 << " and " << s2 << "\n";
    if (!strcmp(s1, s2))
        cout << "s1 and s2 are now the same\n";
    
    return 0;

}