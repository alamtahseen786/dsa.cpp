// MAJORITY ELEMENT
   //QUES-given an array of size n,return the majority element.
   //  brute force approach
   int n=nums.size();
   for (int val:nums){
      int freq=0;

      for(int el:nums){
         if(el == val){
            freq++;
         }
      }
      if(freq>n/2){
         return val;
      }
   }
