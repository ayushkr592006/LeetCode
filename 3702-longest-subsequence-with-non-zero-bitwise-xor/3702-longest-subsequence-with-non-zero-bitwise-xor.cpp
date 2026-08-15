class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int zero=0;
        int a=nums[0];
        if(a==0)zero++;
        for(int i=1;i<n;i++){
            a=a^nums[i];
            if(nums[i]==0)zero++;
        }
        if(zero==n)return 0;
if(a==0)return n-1;
return n;
    }
};