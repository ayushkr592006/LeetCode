class Solution {
public:
const int INF = 1000000000;
int solve(int i,int n,int sum,vector<int>& coins, int amount,vector<vector<int>>&dp){

if(sum==amount)return 0;
if(i>=n){
    if(sum==amount)return 0;
    return INF;
}
if(sum>amount)return INF;//impossible
if(dp[i][sum]!=-1)return dp[i][sum];
int ntake=solve(i+1,n,sum,coins,amount,dp);
int take=INF;
if (sum <= amount-coins[i]){
take=solve(i,n,sum+coins[i],coins,amount,dp);
if(take<INF)take+=1;
}

return  dp[i][sum]= min(take,ntake);



}


    int coinChange(vector<int>& coins, int amount) {
     int n=coins.size();
    
     int sum=0;
  int i=0;
  int cnt=0;
  vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
  int ans= solve(i,n,sum,coins,amount,dp);
if(ans==INF)return -1;
return ans;


    }
};