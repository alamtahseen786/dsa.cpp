// MAXIMUM SUBARRAY SUM
    // KADANE'S ALGORITHM

// QUES= given an integer array nums,find the sub araay with the largest sum,return its sum

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

class solution{
public:
    int maxSubArray(vector<int>&nums){
        int currsum=0,maxsum= INT_MIN;

        for(int val:nums){
            currsum+=val;
            maxsum=max(currsum,maxsum);

            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    }
};

int main(){
    solution obj;

    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};

    cout<<obj.maxSubArray(nums);
    return 0;
}