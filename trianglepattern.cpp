// TRIANGLE PATTERN
#include<iostream>
using namespace std;
int main(){

    int n=4;
    int j,i;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout <<j<<" ";  //j ki jgeh "*" lgane se triangle star pattern bn jaega
        }
        cout <<endl;

    }
    cout<<endl;


    // repeat number triangle pattern
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // reverse triangle pattern
    for(i=0;i<n;i++){
        for(j=0;j<=n-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    for(i=n;i>0;i--){
        for(j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    for(i=0;i<n;i++){
        for(j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
    cout<<endl;
}