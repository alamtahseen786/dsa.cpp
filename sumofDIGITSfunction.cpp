// sum of digits of a number
#include<iostream>
using namespace std;

// function
int sumofDIGITS(int num){
    int sumD=0;

    while(num>0){
        int lastDig=num%10;
        num= num/10;

        sumD+=lastDig;
    }
    return sumD;
}

int main(){
    
    cout<<sumofDIGITS(145);

    return 0;
}