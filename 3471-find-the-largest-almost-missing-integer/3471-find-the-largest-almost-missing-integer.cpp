class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
         int n=nums.size();
         map<int,int>mpp;
         for(int i=0;i<n;i++){
            mpp[nums[i]]++;
         }
        int maxi=-1;
        if(k==1){
        for(int i=0;i<n;i++){
            if(nums[i]>maxi && mpp[nums[i]]==1)maxi=nums[i];
        }
        return maxi; 
        }

        if(k==n)return *max_element(nums.begin(),nums.end());

        if(mpp[nums[0]]==1)  maxi=nums[0];
      if(nums[n-1]>maxi && mpp[nums[n-1]]==1) maxi=nums[n-1];

      return maxi;

        
    }
};