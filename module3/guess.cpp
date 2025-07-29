#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    int guess, random;

    random = rand();

    cout << "Enter your guess : ";
    cin >> guess;
    if (guess == random) {
        cout << "You have guessed correctly!" << "\n";
    } else {
        cout << "Wrong!" << "\n";
    }

    cout << "The correct answer is " << random;

    return 0;
}