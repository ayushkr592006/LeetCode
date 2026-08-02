class Solution {
public:
// int solve(int i,int n,int prev,vector<int>& nums,vector<vector<int>>&dp){

// if(i>=n)return 0;

// //not take
// if( dp[i][prev+1]!=-1)return dp[i][prev+1];
// int skip=solve(i+1,n,prev,nums,dp);

// int take=(prev==-1 || nums[i]>nums[prev])?1+solve(i+1,n,i,nums,dp): 0;

// return  dp[i][prev+1]=max(take,skip);



// }

    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();

int first=INT_MAX;
int second=INT_MAX;
for(int x:nums){
if(x<=first)first=x;
else if(x<=second)  second=x;
else return true;
}



return false;




    //     int prev=-1;
    //     vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    //    return  solve(0,n,prev,nums,dp)>=3;
    }
};