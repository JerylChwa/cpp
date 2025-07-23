#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double distance, lightSpeed, minutes, seconds;
    distance = 34000000;
    lightSpeed = 186000;
    seconds = distance / lightSpeed;
    minutes = seconds / 60;

    cout << "seconds is " << seconds;
    cout << "minutes is " << minutes;

    return 0;

}