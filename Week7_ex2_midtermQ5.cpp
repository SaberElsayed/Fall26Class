
#include <iostream>
#include  <cctype>
using namespace std;
int main() {

    int length, countUpper=0, countLower=0, countSpecial=0;
    char letter;

    // print a message to the user
    cout<< "Enter the length of the password: ";
    // get the number from user
    cin>> length;
    // ask the user to enter the password
    cout << "Enter a sequence of " << length << "characters: ";
    // for the length of the password
    for (int i = 1; i <= length; i++) {
        // read it from the user
        cin>> letter;

        // check if it is uppercase
        if (isupper(letter)) {
            countUpper++;
        }else if (islower(letter)) {
            countLower++;
        }else if (letter =='!' || letter == '@' || letter == '&') {
            countSpecial++;
        }
    }

    if (countUpper>=1 && countLower>=1 && countSpecial>=1) {
        cout << "Strong";
    }else {
        cout << "Weak";
    }

}