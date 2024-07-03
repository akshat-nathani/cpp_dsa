#include <iostream>
using namespace std;

int main(void) {
    int score = 200;
    int *myp = &score;
    printf("Score %d\n", score);
    printf("Address of score %p\n", myp);

    int &anotheracore = score;
    anotheracore = 300;
    printf("Value of anotheracore %d\n", anotheracore);
    printf("Value of score %d\n", score);
}