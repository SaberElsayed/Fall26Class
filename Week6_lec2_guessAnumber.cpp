#include <iostream>
using namespace std;

int main() {

    srand(time(0));
    int guess;
    // I want the computer to guess a number from 0 to 10
    int number= rand()%10;
    // I assume that I do not know the number
    bool isGuessed=false;

    // repeat guessing a number.
    while (!isGuessed) { // isGuessed==false
        cout<<"gusess  a number: ";
        cin>> guess;

        // If my guess is correct, exit the loop

        if (guess==number) {
            isGuessed=true;
            cout << "well-done";
        }
    }





    // print well-done

}