#include <iostream>
using namespace std;

int main() {
 // define variables
 int num, countEven=0, countOdd=0;
 // look at the repeated parts, then use for
 for (int i=1; i<=10 ; i++ ) {
  cout<<"Enter a number: ";
  cin>>num;
// we need ot check if the number is even or odd
  if (num%2==0) {
      countEven++;
  }else {
      countOdd++;
  }

 }

 // print output

    cout<< "Even numbers count: " << countEven << endl;
    cout<< "Odd numbers count: " << countOdd;

}

