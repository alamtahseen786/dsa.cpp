// Reverse an array

#include<iostream>
#include<algorithm> //for using swap function
using namespace std;


void reverse(int arr[],int size){
    int start=0;
    int end=size-1;

    while(start<end) {//for odd size array
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={2,3,7,8,1,2,5};
    int size=7;

    reverse(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}