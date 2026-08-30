class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 1;
         int maxi=INT_MIN;
         int maxidx=-1;
         int mini=INT_MAX;
         int minidx=-1;
         for(int i=0;i<n;i++){
              if(nums[i]>maxi){
                maxi=nums[i];
                maxidx=i;
              }
              if(nums[i]<mini){
                mini=nums[i];
                minidx=i;
              }


         }

                

             int ans1= (min(maxidx+1,n-maxidx)  +min(minidx+1,n-minidx));
         int ans2=(maxidx>minidx)?maxidx+1:minidx+1;
          int ans3=(maxidx<minidx)?n-maxidx:n-minidx;   


         return min(ans1,min(ans2,ans3));




    }
};