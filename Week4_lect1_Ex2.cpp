/**
 *to check if a number is ODD or EVEN
 *
 */
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter a number";
    cin >> num;


    if (num % 2 == 0) {
        // check if the remainder is 0 so it is even
        cout << "even";
    } else {
        cout << "odd";
    }
}
