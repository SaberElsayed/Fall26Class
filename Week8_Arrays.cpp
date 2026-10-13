#include <iostream>
#include<iomanip>
#include <fstream>
using namespace std;
int main(){

    int x[10]={1,2 ,3};// this will initialize the first 3 values, while the rest will be zero

    // cout << x[0] << ", " << x[1] <<endl;
    // cout << x[0] + x[1]; // we can do calculations
    cout <<"Enter data: \n";

    // We need a loop to input each value in the array
    for(int i=0; i<10; i++){
        cin>>x[i];

    }
    // we need another loop to print its content. NOTE: cout<< x will not work
    for(int i=0; i<10; i++){
        if(x[i]>5)
            cout<< x[i] << " ";
    }
}