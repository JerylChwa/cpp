#include <iostream>
using namespace std;

void myfunc(); // myfunc's prototype

int main()
{
    cout << "In main()\n";

    myfunc();
    cout << "Back in main()\n";

    return 0;

}


void myfunc()
{
    cout << "inside my func()\n";
}