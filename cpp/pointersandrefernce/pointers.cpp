#include <iostream>
using namespace std;

int main(){
    int life = 4;
    int card = 40;
    int my_card = card;
    int  *myp;
    myp = &card;
    my_card = *myp; // pointer dereference

    printf("value of card is %d\n", my_card);
    printf("value of card is %p\n", myp);
    return 0;
}