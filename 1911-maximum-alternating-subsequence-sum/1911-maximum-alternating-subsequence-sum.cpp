class Solution {
public:
long long solve(int i,int n,vector<int>& nums,bool flag,vector<vector<long long>>&dp){
if(i>=n)return 0;
if(dp[i][flag]!=-1)return dp[i][flag];


long long skip=solve(i+1,n,nums,flag,dp);
int val=nums[i];

if(!flag)  {
    val=nums[i]*(-1);
}

long long  take=val+solve(i+1,n,nums,!flag,dp);

return dp[i][flag]=max(skip,take);



}


    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        bool flag=true;
        vector<vector<long long>>dp(n+1,vector<long long>(2,-1));
        return solve(0,n,nums,flag,dp);
    }
};