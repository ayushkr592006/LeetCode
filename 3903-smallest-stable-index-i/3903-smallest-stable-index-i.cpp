class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int,int>>v(n);
        
        int mini=nums[n-1];
        int maxi=nums[0];
        for(int i=0;i<n;i++){
              if(nums[i]>=maxi){
                maxi=nums[i];
              }
              v[i].first=maxi;
             
        }
         for(int i=n-1;i>=0;i--){
              if(nums[i]<=mini){
                mini=nums[i];
              }
              v[i].second=mini;
             
        }


    for(int i=0;i<n;i++){
        if((v[i].first-v[i].second)<=k)return i;
    }

return -1;

    }
};