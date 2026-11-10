// CALCULATE SUM OF NUMBERS FROM 1 TO N USING FUNCTION
// Functions are used to reduce redundancy
#include<iostream>
using namespace std;

// making function
    int sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    cout<<sumN(5)<<endl;
    cout<<sumN(20)<<endl;
    return 0;
}