#include <iostream>
using namespace std;

int main() {

    for (int i=1;i<=10; i++) {
        if (i== 3 && i==7 && i==9) {
            continue;
        }else {
            cout<<i<<endl;
        }
    }

    cout<<"Thank you";
}