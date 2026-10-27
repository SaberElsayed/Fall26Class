#include <iostream>
using namespace std;

double larger(double , double );
int main()
{
   double num1, num2, max;
   cout << "Enter two numbers: ";
   cin >> num1 >> num2;

   max= larger(num1,num2);


   cout <<"The largest number is: "<<  max << endl;



}
double larger(double x, double y) {
   double maximum;
   if (x > y) {
      maximum = x;
   }else {
      maximum = y;
   }
   return maximum;
}


