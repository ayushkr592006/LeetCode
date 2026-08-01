class Solution {
public:
int solve(int i,int j,vector<int>& piles,vector<vector<int>>&dp){
if(i>j)return 0;
if (i == j) return piles[i];
if(dp[i][j]!=-1)return dp[i][j];
int left=piles[i]+min(solve(i+2,j,piles,dp),solve(i+1,j-1,piles,dp));
int right=piles[j]+min(solve(i+1,j-1,piles,dp),solve(i,j-2,piles,dp));
return     dp[i][j]=  max(left,right);


}


    bool stoneGame(vector<int>& piles) {
int n=piles.size();
       int i=0;
int j=n-1;
vector<vector<int>>dp(n,vector<int>(n,-1));
int player1=solve(i,j,piles,dp);

int total=accumulate(piles.begin(),piles.end(),0);
int p2=total-player1;
if(player1>=p2)return true;
return false;



    }
};