
#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char text[]="Saber";

    cout<< strlen(text) <<endl;// length of the string

    char text2[]= "Mohamed";
    cout<< strcmp(text, text2) <<endl;;

    strcpy(text, text2); // copy what in text2 insside text
    cout<< text;

    int count=0;
    char tweet[80];
    cout << "Please enter text: ";
    //cin>>tweet;// is wrong
    cin.get(tweet, 81);

    // cout << "the text is: " << tweet;
    for(int i=0; i<strlen(tweet); i++){
        if(tweet[i] >='A' && tweet[i]<='z'){
            count++;
        }

    }
    cout << "The number of letters is: " << count << endl;
    //


    for(int i=0; i<strlen(tweet); i++){
        if(isupper(tweet[i])){
            tweet[i]=  tolower(tweet[i]);
        }else if(islower(tweet[i])){
            tweet[i]= toupper(tweet[i]);
        }
        // else if (tweet[i]== ' '){
        //     tweet[i]= '\0';
        // }

    }

    cout<< tweet;


    int a[2][3]= { {1,2,3} , {4, 5, 6}};
    for(int i=0; i< 2; i++){
        for(int j=0; j<3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    for(int i=0; i< 2; i++){
        for(int j=0; j<3; j++){
            // if(i==1)
            a[1][j]=1000;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}