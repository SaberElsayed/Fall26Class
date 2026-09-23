#include <iostream>
using namespace std;

int main() {
    string str1 = "Apple";
    string str2 = "Az";

    bool compare = str1 < str2;
    cout << compare << endl;


    int x = 5, y;
    // if (x<10) {
    //     y= x*3;
    // }else {
    //     y=-1;
    // }

    // y = x<10? x*3  : -1;
    // cout << y << endl;

    int month;
    cout << "Please enter a number between 1 and 12: ";
    cin >> month;
    //
    // if (month ==1) {
    //     cout << "January";
    // } else if (month == 2) {
    //     cout << "February";
    // } else if (month == 3) {
    //     cout << "March";
    // }else if (month == 4) {
    //     cout << "April";
    // } else if (month == 5) {
    //     cout << "May";
    // }else if (month == 6) {
    //     cout << "June";
    // } else if (month == 7) {
    //     cout << "July";
    // }else if (month == 8) {
    //     cout << "August";
    //
    // } else if (month == 9) {
    //     cout << "September";
    // }else if (month == 10) {
    //     cout << "October";
    // } else if (month == 11) {
    //     cout << "November";
    // } else if (month == 12) {
    //     cout << "December";
    // } else {
    //     cout << "Error";
    // }
    //


    switch (month) {
        case 1: cout << "January ";
            break;
        case 2: cout << "February ";
            break;
        case 3: cout << "March ";
            break;
        case 4: cout << "April ";
            break;
        case 5: cout << "May ";
            break;
        case 6: cout << "June ";
            break;
        case 7: cout << "July ";
            break;
        case 8: cout << "August ";
            break;
        case 9: cout << "September ";
            break;
        case 10: cout << "October ";
            break;
        case 11: cout << "November ";
            break;
        case 12: cout << "December ";
            break;
            default: cout << "Invalid Input"; break;
    }
}
