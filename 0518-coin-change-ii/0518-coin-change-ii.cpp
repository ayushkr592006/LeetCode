class Solution {
public:
const int INF = 1000000000;
int solve(int i,int n,int sum,vector<int>& coins, int amount,vector<vector<int>>&dp){

if(sum==amount)return 1;
if(i>=n){
    if(sum==amount)return 1;
    return 0;
}
if(sum>amount)return 0;//impossible
if(dp[i][sum]!=-1)return dp[i][sum];
int ntake=solve(i+1,n,sum,coins,amount,dp);
int take=0;
if (sum <= amount-coins[i]){
take=solve(i,n,sum+coins[i],coins,amount,dp);
if(take<INF)take=take;
}

return  dp[i][sum]= take+ntake;}



    int change(int amount, vector<int>& coins) {
        int n=coins.size();
    
     int sum=0;
  int i=0;
  int cnt=0;
  vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
  int ans= solve(i,n,sum,coins,amount,dp);
return ans;
    }
};