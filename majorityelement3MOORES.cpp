// MAJORITY ELEMENT USING MOORE'S VOTING ALGORITHM

int freq =0;ans=0;
// moore's algorithem
for(int i=0;i<nums.size;i++){
    if(freq==0){
        ans=nums[i];
    }
    if(ans==nums[i]){
        freq++;
    }else{
        freq--;
    }
}
// check krenge kyuki agr maanlo koi majority ans nahi hai tb 
// additional step
int count=0;
for(int val == nums){
    if(val == ans){
        count++;
    }
}
if(cout>n/2)=> ans
else=> -1

return ans;