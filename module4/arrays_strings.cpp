#include <iostream>
using namespace std;

int main() {
    char str[6] = "Hello";
    int nums[] = {44, 55, 66, 77};

    cout << str << "\n";
    // this will not print out the array as nums is just a pointer
    // cout << nums;
    
    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < size; ++i) {
        cout << nums[i] << "\n";
    }

    return 0;

}