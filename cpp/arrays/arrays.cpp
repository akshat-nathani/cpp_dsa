//arrays and pointers of an array

#include <iostream>
using namespace std;

int main(void) {
    int interger_array[4] = {0, 1, 2, 3};
    cout << interger_array << endl;

    int another[4];
    another[0] = 9;
    another[1] = 19;
    cout << another[0] << endl; // agrbage values

    *another= 29;

    int *ap = another;
    ap++;
    cout << *ap << endl; //proves that array is a contino us memory allocation
}