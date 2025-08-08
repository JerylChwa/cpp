#include <iostream>
using namespace std;

// first define box()'s prototype
int box(int length, int width, int height);

int main()
{   
    int dummy;
    cout << "The area is " << box(7, 20, 4) << "\n";
    cout << "This is dummy " << dummy;
    return 0;
}


int box(int length, int width, int height) 
{
    int area = length*width*height;
    return area;
}