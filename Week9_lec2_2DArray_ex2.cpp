#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    const int rows = 6; // something like a bok and its value is FIXED
    const int cols = 5;
    int a[rows][cols] = {
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8, 10},
        {12, 54, 23, 76, 11},
        {1, 12, 34, 22, 8},
        {81, 54, 32, 67, 33},
        {12, 34, 76, 78, 9}
    };

    // print 2-D
    for (int i = 0; i < rows; i++) {
        // for rows
        for (int j = 0; j < cols; j++) {
            // for coulmns
            cout << setw(5) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "--------------find the sum of each row-------------------" << endl;
    int sum;
    for (int i = 0; i < rows; i++) {
        sum = 0; // reset to zero to ensure that you start from scratch at every row
        for (int j = 0; j < cols; j++) {
            sum += a[i][j];
        }
        cout << "The sum of row " << i << ": " << sum << endl;
    }
    cout << "--------------END: find the sum of each row-------------------" << endl;


    cout << "--------------find the sum of each column-------------------" << endl;
    for (int j = 0; j < cols; j++) {
        sum = 0; // reset to zero to ensure that you start from scratch at every row
        for (int i = 0; i < rows; i++) {
            sum += a[i][j];
        }
        cout << "The sum of column " << j << ": " << sum << endl;
    }
    cout << "--------------END: find the sum of each column-------------------" << endl;


    cout << "--------------find the maximum value in each row-------------------" << endl;
    int max;
    for (int i = 0; i < rows; i++) {
        max = a[i][0]; // the first value in each row-- another option is to set it to a very small value
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > max) {
                // check if the current value in the array is bigger than max
                max = a[i][j];
            }
        }
        cout << "The maximum of row " << i << ": " << max << endl;
    }


    cout << "--------------END: find the maximum value in each row-------------------" << endl;

    cout << "--------------Practice quiz example-------------------" << endl;
    int array[10];
    int lower, upper;
    cout << "Enter 10 integers \n";
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }

    cout << "enter two values:  ";
    cin >> lower >> upper;

    double sum2 = 0, count = 0;
    for (int i = 0; i < 10; i++) {
        if (array[i] >= lower && array[i] <= upper) {
            sum2 += array[i];
            count++;
        }
    }
    cout << "The sum of all elements: " << sum2 / count << endl;
    cout << "--------------END: Practice quiz example-------------------" << endl;
}
