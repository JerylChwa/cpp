#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float principal, interest, numPayments, years, payment;
    cout << "Enter principal: ";
    cin >> principal;
    cout << "Enter interest: ";
    cin >> interest;
    cout << "Enter number of payments in a year: ";
    cin >> numPayments;
    cout << "Enter number of years: ";
    cin >> years;

    payment = ((interest * principal / numPayments)) / (1- pow(((interest/numPayments)+1), (-1*numPayments*years)));
    cout << "Payment is " << payment;

    return 0;
}