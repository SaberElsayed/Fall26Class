#include <iostream>
using namespace std;

int main() {
    char letter;
    int countLetters = 0;
    cout<< "Please enter a string ending with #:";
    cin>> letter; // reads only one char
    while (letter != '#' ) {
        countLetters++; // increases counter by 1
        cin>>letter; // please read the following letter form user

    }

    cout << "The total number of letters is: " << countLetters <<  "letters" << endl;

}