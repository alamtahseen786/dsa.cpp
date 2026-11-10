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


    // inverted reverse triangle pattern
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
    
    cout<<endl;


    // inverted pattern with spaces 
    int num=1;
    for(i=0;i<n;i++){
        // spaces
        for(j=0;j<i;j++){ //i times space jaise value i ka same waise value space ka bdh raha hai
            cout<<" ";
        }

        // nums
        for(j=0;j<n-i;j++){ //hr line me n-i number print ho rahe hai
            cout<<(i+1);
        }

        cout<<endl;
    }

    cout<<endl;

    // pyramid inverse pattern

    for(i=0;i<n;i++){
        // spaces
        for(j=0;j<i;j++){
            cout<<" ";
        }

        // nums
        for(j=0;j<n-i;j++){
            cout<<(i+1)<<" ";
        }

        cout<<endl;
    }

    cout<<endl;


    // simple pyramid pattern
        //first half of triangle
        // spaces aage n-i-1 
        // lines kaise print ho rahi hai 1 to i+1

        // second half triangle right side wala
        // loop chalega j=i to 1,backward loop
        

        // code start
        for(i=0;i<n;i++){
            // spaces:n-i-1
            for(j=0;j<n-i-1;j++){
                cout<< " ";
            }

            // num1:i+1
            for(j=1;j<=i+1;j++){
                cout<<j;
            }

            // num2:backward loop
            for(j=i;j>=1;j--){
                cout<<j;
            }

            cout<<endl;
        }
    return 0;
}