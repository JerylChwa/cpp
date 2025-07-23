#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    double average;
    cout << "enter first: \n";
    cin >> num1;
    cout << "enter second: \n";
    cin >> num2;
    cout << "enter third: \n";
    cin >> num3;
    cout << "enter fourth: \n";
    cin >> num4;
    cout << "enter fifth: \n";
    cin >> num5;

    average = (num1 + num2 + num3 + num4 + num5) / 5.0;
    cout << "Average is " << average;

    return 0;

}