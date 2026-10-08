#include <iostream>
using namespace std;

int main(){

    int days = 0;
    double max = 0, totalRain = 0, inputRain = 0;

    cout << "Enter the inputRain for day #1: ";
    cin >> inputRain;

    while(inputRain != -1){
        days++;
        totalRain = totalRain+ inputRain;
        if(inputRain > max)
            max = inputRain;

        cout << "Enter the inputRain for day #" << days + 1 << ": ";
        cin >> inputRain;

    }
    cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;
    cout << "inputRain days: " << days << endl;
    cout << "Total inputRain: " << totalRain << endl;
    cout << "Maximum inputRain: " << max << endl;

    return 0;
}
