class Solution {
public:
bool check(string &s1 ,string &s2){
    if(s1.size() !=1+s2.size()) return false;
    int first=0;
    int second=0;
    while(first<s1.size()){
        if(second <s2.size() && s1[first]==s2[second]) {
            first++;
            second++;
        }
        else{
            first++;
        }
    }
    if(first==s1.size() && second==s2.size()) return true;
    return false;
}

int solve(int i,int n,int curr,vector<string>& nums, vector<vector<int>>&dp){
if(i>=n)return 0;
if(dp[i][curr+1]!=-1)return dp[i][curr+1];
//ntake;
int ntake=solve(i+1,n,curr,nums,dp);

int take=0;

if(curr==-1|| check(nums[i],nums[curr])){
take=1+solve(i+1,n,i,nums,dp);

}

return   dp[i][curr+1]= max(take,ntake);


}




static bool comp(string &s1, string &s2){
    return s1.size() <s2.size();
}
    int longestStrChain(vector<string>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),comp);
     int curr=-1;
     vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    return  solve(0,n,curr,nums,dp);




//          vector<int>dp(n,1);
//           int maxi=1;
          
//           for(int i=0;i<n;i++){
          
//             for(int j=0;j<i;j++){
            
//             if(check(nums[i],nums[j]) && 1+dp[j]>dp[i]){
//                 dp[i]=1+dp[j];
               
//             }


//             }
//             if(dp[i]>maxi){
//                 maxi=dp[i];
             
//             }
//           }

// return maxi;
    }
};