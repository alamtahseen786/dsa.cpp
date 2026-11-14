#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec; //size of the vector=0
    // cout<<vec[0]; //error because size of vector is 0

    vector<int>vec={1,2,3,4,5}; //size of the vector=5
    cout<<vec[0]<<endl; //1

    vector<int>vec2(3,5); //size of the vector=10 and all elements are 5
    cout<<vec2[0]<<endl; //5 
    cout<<vec2[1]<<endl; //5
    cout<<vec2[2]<<endl; //5    
    cout<<vec2[3]<<endl; //error because size of vector is 3


     vector<char>vec3={'a','b','c'}; //for each loop
    for(char i:vec3){
        cout<<i<<endl;
    }
    return 0;
}