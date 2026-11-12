// SCOPE 

#include<iostream>
using namespace std;

int y=70; //global variable,can be called anywhere

int main(){

    // local scope,cannot use it outside
    if(3>1){
        int x=10;
    }

    cout<<x<<endl;  //error: 'x' was not declared in this scope
    cout<<y<<endl;
    return 0;
}