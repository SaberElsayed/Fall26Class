// This is  just lec2 in week3.
// It tests predefined functions like cos sin sqrt
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout<< "abs(-150) is: "<<abs(-150)<< endl; // abs
    cout << "ceil of 5.3 is: " << ceil(5.3) << "\n"; // round it up
    cout << "floor of 5.3 is: " << floor(5.3); // round it down
    cout << "square root of 25 is: " << sqrt(25) << endl; // square root
    cout << "sin 3 is: " << sin(3) << endl;
    cout << "cos 3 is" << cos(5) << endl;
    cout << "7^3 is : " << pow(7, 3) << endl;
    cout << fabs(-5.3) << endl;
    cout << exp(5) << endl;
    cout << static_cast<char>(tolower('A')) << endl;
    cout << static_cast<char>(toupper('c')) << endl;
    cout << islower('A') << endl;
    cout << fabs(-5.3) << endl;
}
