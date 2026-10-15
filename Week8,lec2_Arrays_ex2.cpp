#include <iostream>

using namespace std;

int main() {
    double marks[10], sum = 0, max = 0, min=1000000000;
    for (int i = 0; i < 10; i++) {
        marks[i] = rand() % (21);
        cout << marks[i] << " " ;
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        sum+=marks[i];
        if (max<marks[i]) {
            max = marks[i];
        }

        if (min>marks[i]) {
            min = marks[i];
        }


    }
    cout <<"Sum is: " << sum << ", avg: "<< sum/10 << ", Max: "<< max<< ", Min: " << min<< endl;
}
