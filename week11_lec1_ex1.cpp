#include <iostream>
using namespace std;
bool isEven(int x);
bool isPrime(int x);
void initArray(int a[], int size);
int main() {

    int x;
    cout<<"Enter integer value:";
    cin >> x ;

    if (isEven(x))
        cout<<x<< " is an even number."<<endl;
    if (isPrime(x))
        cout<<x<< " is a prime number."<<endl;

}

bool isEven(int x) {

    if (x%2==0)
        return true;
    else
        return false;
}
bool isPrime(int x){
    if (x<=1)
        return false;
    else if (x==2){
        return true;
    }
    for(int i=2; i<x;i++){
        if (x%i==0){
            return false;
        }
    }
    return true;
}