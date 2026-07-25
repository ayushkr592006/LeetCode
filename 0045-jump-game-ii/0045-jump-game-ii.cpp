class Solution {
public:
 
    int solve(int i, vector<int>& nums,int n,vector<int>&dp) {
        //base case
      if(i>=n-1){
        return 0;
      }
      if(dp[i]!=-1)return dp[i];
int num=nums[i];
int ans=n+1;
     for(int j=1;j<=num;j++){
        
       if(i+j<n) { 
       int p= solve((i+j),nums,n,dp);
      
        ans=min(ans,1+p);}
     }

return dp[i]=ans;

    }

    int jump(vector<int>& nums) {
     
          int n=nums.size();
        
vector<int>dp(n,-1);
         return  solve(0,nums,n,dp);


    }
};