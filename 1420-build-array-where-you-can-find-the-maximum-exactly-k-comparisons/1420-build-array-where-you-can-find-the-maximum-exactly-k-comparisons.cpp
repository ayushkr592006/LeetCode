class Solution {
public:
int dp[51][51][102];
int Mod=1e9+7;
int solve(int i,int n, int m, int k,int cost,vector<int>&nums,int maxi){
if(cost==k && i==n)return 1;
else if(i==n && cost !=k)return 0;
int ans=0;
if(cost>k)return 0;
if(dp[i][cost][maxi+1]!=-1)return dp[i][cost][maxi+1];
for(int j=1;j<=m;j++){

       nums[i]=j;
      if(  nums[i]>maxi) ans=(ans+solve(i+1,n,m,k,cost+1,nums,j))%Mod  ;
      else  ans=(ans+solve(i+1,n,m,k,cost,nums,maxi))%Mod ;
      
      nums[i]=0;


}

return    dp[i][cost][maxi+1]=  ans;




}


    int numOfArrays(int n, int m, int k) {
        int i=0;
        int cost=0;
        int ans=0;
        int maxi=-1;
        vector<int>nums(n,0);
        // vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        memset(dp,-1,sizeof(dp));
         return  solve(i,n,m,k,cost,nums,maxi);

    

    }
};