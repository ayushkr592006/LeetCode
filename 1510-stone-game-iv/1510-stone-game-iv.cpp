class Solution {
public:
bool solve(int n,vector<int>&dp){
if(n==0)return false;


if(dp[n]!=-1)return dp[n];
for(int i=1;i*i<=n;i++){
  
  if(!solve(n-i*i,dp)) return  dp[n]=true;
    
}
return  dp[n]=false;

}


   bool winnerSquareGame(int n) {
vector<int>dp(n+1,-1);
return solve(n,dp);











    // int p = sqrt(n);

    // if (p * p == n)
    //     return true;

    // for (int q = 1; q <= p; q++) {
    //     int rem = n - q * q;

    //     int x = sqrt(rem);

    //     if (x * x == rem)
    //         continue;

    //     // your parity idea
    //     if (rem % 2 == 0)
    //         return true;
    // }

    // return false;
}
};