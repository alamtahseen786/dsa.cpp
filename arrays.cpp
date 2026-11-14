// ARRAYS

    // Ques-find smallest/largest in arrays

#include<iostream>
#include<climits> //for using INT_MAX and INT_MIN function
using namespace std;
int main(){
    int nums[]={10,20,45,33,57};
    int size=5;

    int smallest= INT_MAX; //plus infinite
    int largest=INT_MIN; //minus infinite

    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];

        }
         //short one line code 
         largest=max(nums[i],largest);
    }
    cout<<"smallest = "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;
    return 0;
}
