/**
* to check the grade of a student
*/

#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Please enter your mark: ";

    cin >> mark;

    if (mark >= 90) {
        cout << "Congrats: you got A" << endl;
    } else if (mark >= 80) {
        cout << "Congrats: You got B";
    } else if (mark >= 70) {
        cout << "Congrats: You got C";
    } else if (mark >= 60) {
        cout << "Congrats: You got D";
    } else {
        cout << "oops!!! You got F";
    }
}
