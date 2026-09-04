#include <iostream>
using namespace std;

int main() {
    int seconds;
    // ask user to enter the number of seconds
    cout << "Please enter the number of seconds: ";
    //get input from user
    cin >> seconds;
    //cal number of minutes and remaining seconds
    int min = seconds / 60;
    int remainingSeconds = seconds % 60;
    //output results
    cout << "The total number of minutes in " << seconds << " is " << min << " and the remaining seconds are " <<
            remainingSeconds;
}
