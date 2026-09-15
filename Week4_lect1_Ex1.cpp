/**
* to calculate the length of a diagonal of a rectangle
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double W, H, d;
    cout << "Please enter W and H: " << endl;
    cin >> W >> H;

    // do calculations

    d = sqrt(pow(W, 2) + pow(H, 2));

    // print the output

    cout << "the diagonal is =  " << d;
}
