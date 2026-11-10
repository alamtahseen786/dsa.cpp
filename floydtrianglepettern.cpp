// FLOYD'S TRIANGLE PATTERN
#include <iostream>
using namespace std;
int main(){
    int n=4;
    int i;
    int j;
    int num=1;
    // for(i=0;i<n;i++){
    //     for(j=0;j<=i;j++){  //using forward inner loop
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
     
    // cout<<endl;

    for(i=0;i<n;i++){
        for(j=i+1;j>0;j--){  //using backward inner loop
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }



    return 0;
}