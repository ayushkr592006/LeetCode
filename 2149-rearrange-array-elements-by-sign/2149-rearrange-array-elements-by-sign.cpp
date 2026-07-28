class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
      int i=0;
      int j=0;
      while(i<n && j<n){
       if(nums[i]>0 && nums[j]<0){
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);
        i++;
        j++;
       }
       else if(nums[i]>0 && nums[j]>0){
        j++;
       }
       else if(nums[i]<0 && nums[j]<0){
        i++;
       }

 else if(nums[i]<0 && nums[j]>0){
        i++;
       }
        


      }
      return ans;
    }
};