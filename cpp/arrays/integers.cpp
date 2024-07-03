// 1 byte is of 8 bits
#include <iostream>
#include <cstdint> // c std int - for exact size because there are some ambiguous size issues for different os
using namespace std;

int main(void) {
    printf("size of int is %ld bytes \n", sizeof(int32_t));
    int fun = 0x16; // hexadecimals
    int fun = 0b00010110; // binary
    printf("Value of fun is %d \n", fun);
}