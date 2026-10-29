#include <iostream>
using namespace std;

double larger(double x, double y) ;
void askUser(double &num1, double &num2);
void print( double max );
int main() {

    //define variables
    double num1, num2, max;

    askUser(num1, num2);// calls the ask user function

    // calling a user-defined function which is called larger
    max = larger(num1, num2);

    print(max);
}

void print( double max ) {
    cout << "The largest number is: " << max << endl;
}


void askUser(double &num1, double &num2) {
    //ask the user to enter two values
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
}

// a user-defined function that returns the largest value between 2 values
double larger(double x, double y) {
    double maximum;
    if (x > y) {
        maximum = x;
    } else {
        maximum = y;
    }
    return maximum;
}
