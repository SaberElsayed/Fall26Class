/******************************************************************************
write a function that returns the total sum of 3 numbers
*******************************************************************************/

#include <iostream>
using namespace std;

double totalSum(double x, double y, double z );
int main()
{
   double x,y,z, sum;
   cout << "Enter 3 numbers: " << endl;
   cin >> x>> y>> z;

   sum = totalSum(x,y,z);
   cout << "the total sum is: " << sum;

}

double totalSum(double x, double y, double z ){
    double sum = x+y +z;
    return sum;
    // or just return the sum in the return statement
    //return x+y+z;
}