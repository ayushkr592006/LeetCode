class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       vector<int>ans;
       int check=INT_MIN;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==check)continue;
        else {
            ans.push_back(nums[i]);
            check=nums[i];
        }
       }

    for(int i=0;i<ans.size();i++){
        nums[i]=ans[i];
    }
return ans.size();

    }
};