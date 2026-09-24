#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber, result;
    char operation;
    cout << "Enter first number: ";
    cin>> firstNumber;
    cout << "Enter an operator (+, -, *, /): ";
    cin>> operation;

    cout << "Enter second number: ";
    cin>> secondNumber;
    switch (operation) {
        case '+':
            result= firstNumber + secondNumber;
            cout<< "Result: " << firstNumber << operation <<  secondNumber << " = " << result << endl;
            break;
        case '-':
            result= firstNumber - secondNumber;
               cout<< "Result: " << firstNumber << operation <<  secondNumber << " = " << result << endl;
            break;
        case '*':
            result = firstNumber * secondNumber;
           cout<< "Result: " << firstNumber << operation <<  secondNumber << " = " << result << endl;
              break;
            case '/':
            result = firstNumber / secondNumber;
            cout<< "Result: " << firstNumber << operation <<  secondNumber << " = " << result << endl;
            break;
            default:
            cout<< "Error: Invalid operator!" << endl;
    }


    // if (operation== '+') {
    //     result= firstNumber + secondNumber;
    //     cout<< "Result: " << firstNumber << operation <<  secondNumber << " = " << result << endl;
    //
    // }else if (operation == '-') {
    //     result= firstNumber - secondNumber;
    //     cout<< "Result: " << firstNumber << operation <<  secondNumber << " = " << result << endl;
    //
    // }else if (operation == '*') {
    //      result = firstNumber * secondNumber;
    //     cout<< "Result: " << firstNumber << operation <<  secondNumber << " = " << result << endl;
    //
    //
    // }else if (operation == '/') {
    //     result = firstNumber / secondNumber;
    //     cout<< "Result: " << firstNumber << operation <<  secondNumber << " = " << result << endl;
    //
    // }else {
    //     cout<<"Error: Invalid operator!"<<endl;
    // }


}
