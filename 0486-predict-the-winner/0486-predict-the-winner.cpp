class Solution {
public:
  int solve(int i,int j,vector<int>& nums,int n,vector<vector<int>>&dp){
if(i==j)return nums[i];
//minus karne ke baad tuen ki zarurat hi nhi higi
if(dp[i][j]!=-1)return dp[i][j];
int left=nums[i]-solve(i+1,j,nums,n,dp);
int right=nums[j]-solve(i,j-1,nums,n,dp);
return dp[i][j]=max(left,right);

  }

    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
         int sum=0;
         int j=n-1;
         vector<vector<int>>dp(n,vector<int>(n,-1));
       return solve(0,j,nums,n,dp)>=0;


    }
};