class Solution {
public:
int solve(int i,int n,vector<int>& nums,vector<int>&dp){
if(i>=n)return 0;
if(dp[i]!=-1)return dp[i];
int first=nums[i]-solve(i+1,n,nums,dp);
int second=(i+1<n)?nums[i]+nums[i+1]-solve(i+2,n,nums,dp):INT_MIN;
int third=(i+2<n)?nums[i+1]+nums[i]+nums[i+2]-solve(i+3,n,nums,dp):INT_MIN;

return dp[i]=max(first,max(second,third));




}


    string stoneGameIII(vector<int>& stoneValue) {
        
          int n=stoneValue.size();
          vector<int>dp(n+1,-1);
   


      int sc= solve(0,n,stoneValue,dp);
         if (sc>0)return "Alice";
          else if(sc==0) return "Tie";
          return "Bob";

    }
};