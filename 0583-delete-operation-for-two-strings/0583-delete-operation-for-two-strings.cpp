class Solution {
public:
int solve(int n,int m,int i,int j,string &word1, string &word2,vector<vector<int>>&dp){
if(i>=n || j>=m)return 0;
int ntake=-1;
int take=0;
if(dp[i][j]!=-1)return dp[i][j];
if(word1[i]!=word2[j]){
    
   ntake= max(solve(n,m,i+1,j,word1,word2,dp),solve(n,m,i,j+1,word1,word2,dp));

}

else take=1+solve(n,m,i+1,j+1,word1,word2,dp);

return  dp[i][j]= max(take,ntake);

}

    int minDistance(string word1, string word2) {
         int n =word1.size();
         int m=word2.size();
         vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
      int temp=  solve(n,m,0,0,word1,word2,dp);
     
           int ans=0;
           if(temp==m){
                ans=n-temp;
           }
            
            else {
                ans=n-temp;
                ans+=(m-temp);
            }


return ans;

    //    int m=word2.size();
    //     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    //     for (int i = 1; i <= n; i++) {
    //         for (int j = 1; j <= m; j++) {
    //             // take
    //             if (word1[i - 1] == word2[j - 1])
    //                 dp[i][j] = dp[i - 1][j - 1] + 1;
    //             else
    //                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    //         }
    //     }


    //    return ( n-dp[n][m]) +(m-dp[n][m]);

    }  
};