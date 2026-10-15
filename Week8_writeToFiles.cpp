#include <iostream>
#include<iomanip>
#include <fstream>
using namespace std;

int main() {
    // to read from a file
    ifstream in;
    in.open("data.txt");

    // to write to a file
    ofstream out; // a variable for the output file
    out.open("Results.txt");

    int x, count = 0;
    double avg, total = 0;
    while (in >> x) {
        // will read one value at atime until all values are read
        total = total + x;
        count++;
    }
    avg = total / count;
    out << "The average is: " << avg;

    in.close();
    out.close();
}
