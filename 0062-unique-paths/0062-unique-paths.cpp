class Solution {
public:
int solve(int i,int j,int m,int n,vector<vector<int>>&dp){
if(i==m-1  && j==n-1) return 1;
if(i>=m || j>=n)return 0;
if(dp[i][j]!=-1)return dp[i][j];
//down
int down= (i+1<m && j<n) ? solve(i+1,j,m,n,dp):0;

//up
int right=(i<m && j+1<n)?solve(i,j+1,m,n,dp):0;

return dp[i][j]=(down+right);


}


    int uniquePaths(int m, int n) {
        int i=0;
        int j=0;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
       return solve(i,j,m,n,dp);
    }
};