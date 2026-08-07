class Solution {
public:
int solve(int i,int j,int n,string &s,string &t,vector<vector<int>>&dp){
if(i>=n || j>=n)return 0;
if(dp[i][j]!=-1)return dp[i][j];
int skip=0;
int take=0;
if(s[i]!=t[j]){
skip=max(solve(i+1,j,n,s,t,dp),solve(i,j+1,n,s,t,dp));


}
else take=1+solve(i+1,j+1,n,s,t,dp);

return  dp[i][j]= max(take,skip);


}



    int minInsertions(string s) {

        int n = s.size();
        // string p = s;
        // reverse(p.begin(), p.end());
        // vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= n; j++) {
        //         // take
        //         if (s[i - 1] == p[j - 1])
        //             dp[i][j] = dp[i - 1][j - 1] + 1;
        //         else
        //             dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        //     }
        // }

        // return (n - dp[n][n]);

string t=s;
reverse(t.begin(),t.end());
vector<vector<int>>dp(n,vector<int>(n,-1));
return (n-solve(0,0,n,s,t,dp));


    }
};
