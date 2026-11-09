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
}