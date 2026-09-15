#include <iostream>
#include<string>
using namespace std;

int main() {
    double x = 2;
    double y = 5;
    double z = 3;

    string name = "Saber";

    x = x*y;
    x*=y;

    cout << x << endl;

    z = y = x;
    cout << x << "," << y << "," << z;
}
