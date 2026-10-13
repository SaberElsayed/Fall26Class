#include <iostream>
#include<iomanip>
#include <fstream> // step 1
using namespace std;
int main()
{
    ofstream book; // step 2
    book.open("output.txt"); // step 3
    for(int i=0; i<10; i++){
        book<< "Hello" <<endl; // step 4: write to a file
        cout<<"*";
    }
    book<<"Salam";


    book.close(); // step 5


}