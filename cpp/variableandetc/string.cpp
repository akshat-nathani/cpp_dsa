#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string myColor;
    cout << "Enter a color: ";
    getline(cin, myColor);
    cout << myColor<< " is my favorite color too. " <<endl;
}