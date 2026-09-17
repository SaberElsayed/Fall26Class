#include <iostream>
using namespace std;

int main() {

   char gender;
   double height;
    // get gender from user
    cout << "Are you a man? Write M for man or F for female" << endl;
    cin>> gender;
    // get h from user
    cout<< "what is your height?" << endl;
    cin>> height;

    // write the condition for male
    if (gender == 'M' && height >= 190) {
    cout << "You are a tall Man." << endl;
    }else  if (gender == 'm' && height < 190){
     cout << "You are NOTE a tall Man." << endl;
    }

    // write condition for the F
    if(gender == 'F' && height >= 175){
    cout << "You are a tall women." << endl;
    } else if(gender == 'F' && height < 175){
    cout << "You are NOTE a tall women." << endl;
    }

    // show output

}