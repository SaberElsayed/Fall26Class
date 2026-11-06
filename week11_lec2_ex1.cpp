#include <iostream>
using namespace std;
double findMax(int a [], int size);

void readData (int a[], int size) ;
double findMin(int a[], int size);
int main() {

    int a[10];
    readData(a,10);
    double max;
    max= findMax(a, 10);
    cout << "The maximum value is: " << max << endl;

    double min = findMin(a,10);
    cout << "The minimum value is: " << min;

}

// a user-defined function to read data from the user
void readData (int a[], int size) {
    cout<<"Enter 10 integer values: ";
    for (int i = 0; i < 10; i++) {
        cin>> a[i];
    }
}
// a user-defined function to find the minmum value in the array
double findMin(int a[], int size) {
    double min = a[0];
    for (int i = 0; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

// a user-defined function to find the maximum value in the array
double findMax(int a [], int size) {
 double max =a[0];
    for (int i = 0; i < 10; i++) {
        if (a[i]> max) {
            max = a[i];
        }
    }
    return  max;
}

