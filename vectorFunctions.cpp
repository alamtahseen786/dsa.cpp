#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vec={'a','b','c'}; 

    cout<<"size = "<<vec.size()<<endl; //size of vector
    cout<<"capacity = "<<vec.capacity()<<endl; //capacity of vector


    vector<int>vec2; //initial size is zero
    vec2.push_back(55);
    vec2.push_back(56);
    vec2.push_back(57);

    cout<<"size = "<<vec2.size()<<endl; 

    cout<<vec2.front()<<endl; //first element
    cout<<vec2.back()<<endl; //last element

    vec2.pop_back(); //last value gets removed always
    for(int i=0;i<vec2.size();i++){
        cout<< vec2[i]<<" ";
    }



    
}