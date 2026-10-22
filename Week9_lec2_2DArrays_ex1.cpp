#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    const int rows = 6; // something like a bok and its value is FIXED
    const int cols = 5;
    int a[rows][cols] = {
        {23, 5, 6, 15, 18},
        {4, 16, 24, 67, 10},
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
    cout << "--------------CHANGE ALL VALUES TO BE ONE-------------------" << endl;
    // CHANGE ALL VALUES TO BE ONE
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] = 1;
            cout << setw(5) << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "--------------End CHANGE ALL VALUES TO BE ONE---------------------" << endl;

    cout << "--------------CHANGE THE FIFTH ROW TO BE ZERO-------------------" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[4][j] = 0; // change all values in row 5 (index 4) to be zero
            cout << setw(5) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "--------------END CHANGE THE FIFTH ROW TO BE ZERO-------------------" << endl;

    cout << "--------------CHANGE THE third COLUMN TO BE 100-------------------" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][2] = 100; // change all values in row 5 (index 4) to be zero
            cout << setw(5) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "--------------END CHANGE THE third COLUMN TO BE 100-------------------" << endl;
}
