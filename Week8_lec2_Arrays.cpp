#include <iostream>
#include <string.h>

using namespace std;

int main() {
    double sum = 0;
    double x[4]= {1,3,7,5};
    double y[5] = {10,3, -2, 2,5};

    for (int i = 0; i < 4; i++) {
        sum= sum+x[i];
    }
    for (int i = 0; i < 5; i++) {
        sum+= y[i];
    }

    cout <<"The total sum is: " << sum << endl;
}
