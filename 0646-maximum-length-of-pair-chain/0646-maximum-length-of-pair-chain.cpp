class Solution {
public:
int solve(int i,int n,int prev,vector<vector<int>>& pairs, vector<vector<int>>&dp){
if(i>=n)return 0;

if(dp[i][prev+1]!=-1)return dp[i][prev+1];

//skip
int skip=solve(i+1,n,prev,pairs,dp);

//take
int take=(prev==-1 || pairs[i][0]>pairs[prev][1])?1+solve(i+1,n,i,pairs,dp):0;

return dp[i][prev+1]=max(skip,take);



}


    int findLongestChain(vector<vector<int>>& pairs) {
        
        int n=pairs.size();
        int prev=-1;
        sort(pairs.begin(),pairs.end(),[](vector<int>&a,vector<int>&b){
            if(a[0]==b[0])return a[1]<b[1];
            return a[0]<b[0];
        });
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
     return   solve(0,n,prev,pairs,dp);
    }
};