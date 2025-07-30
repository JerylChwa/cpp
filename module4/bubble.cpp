#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // initialise array of size 10, contains integers
    int nums[10];
    int a, b, t;
    int size;

    size = 10; // number of elements to sort

    //populate array with random values
    for (t=0; t<size; t++) nums[t] = rand();

    // display original array
    cout << "Original array: " << "\n";
    for (t=0; t<size; t++) cout << nums[t] << ' ';
    cout << "\n";

    // bubble sort, from right to left, settling the smallest elements first
    for (a=1; a<size; a++)
        for (b=size-1; b>=a; b--) {
            if (nums[b-1]>nums[b]) {
                t = nums[b-1];
                nums[b-1] = nums[b];
                nums[b] = t;
            }
        }
    
    // display sorted array
    cout << "Sorted array: " << "\n";
    for (t=0; t<size; t++) cout << nums[t] << ' ';

    return 0;
}