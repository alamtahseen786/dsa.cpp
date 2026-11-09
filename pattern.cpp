// SQUARE PATTERN 

#include <iostream>
using namespace std;
int main(){

    int i;
    int j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            cout <<j;
        }
        cout <<endl;
    }


    // star pattern

    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            cout <<"*";
        }
        cout <<endl;
    }


        // loop from 0
        for(i=0;i<=4-1;i++){
        for(j=0;j<=4-1;j++){
            cout <<"*";
        }
        cout <<endl;
    }


    // pattern in char

    for(i=0;i<4;i++){
        char ch='A';
        for(j=0;j<4;j++){
            cout <<ch;
            ch+=1;
        }
        cout <<endl;
    }


    // square pattern but dont repeat number 

    int num=1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << num <<" ";
            num++;
        }
        cout <<endl;
    }

    return 0;



// triangle pattern

}