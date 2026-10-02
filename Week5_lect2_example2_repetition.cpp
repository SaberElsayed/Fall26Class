#include <iostream>
using namespace std;

int main() {
    // cout<< "value is: 1" <<endl;
    // cout<< "value is: 2" <<endl;
    // cout<< "value is: 3" <<endl;
    // cout<< "value is: 4" <<endl;
    // cout<< "value is: 5" <<endl;
    // cout<< "value is: 6" <<endl;
    // cout<< "value is: 7" <<endl;
    // cout<< "value is: 8" <<endl;
    // cout<< "value is: 9" <<endl;
    // cout<< "value is: 10" <<endl;


    for (int i=1;i<=10; i++) {
        cout << "value is:" << i<< endl;
    }

    for (int i=10; i>=1; i--) {
        cout << "value is:" << i<< endl;
    }

    int numStudents, mark, total;
    cout<<"Enter number of students: ";
    cin>> numStudents;
    for (int i=1; i<=numStudents; i++) {
        cout<< "Please enter the mark for student # " << i <<": ";
        cin>> mark;
        total= total+ mark;// find the total of all marks
    }

    cout<< "the average is " << total/numStudents;


}
