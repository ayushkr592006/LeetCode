class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int p=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]<nums[i]){
                cnt++;}
      
        }

      if(cnt==1 && nums[n-1]<=nums[0])return true;
      if(cnt==0)return true; 


        return false;
    }
};