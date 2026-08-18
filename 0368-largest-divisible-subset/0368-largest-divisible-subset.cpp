class Solution {
public:
         void solve(int i,int prev,int n,vector<int>& nums,vector<int>&ans,vector<int>&temp,vector<vector<int>>&dp){

              if(i>=n  ){
               if(ans.size()>temp.size()){temp=ans;
               return;}
return;

              }

          if (dp[i][prev + 1] >=(int) ans.size())
            return;

        dp[i][prev + 1] = ans.size();

if(prev==-1 || (nums[i]%nums[prev]==0)){
    ans.push_back(nums[i]);
   solve(i+1,i,n,nums,ans,temp,dp);
   ans.pop_back();
}


 solve(i+1,prev,n,nums,ans,temp,dp);






         }

    vector<int> largestDivisibleSubset(vector<int>& nums) {
    int n=nums.size();
    int prev=-1;
    vector<int>ans;
    vector<int>temp;
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    sort(nums.begin(),nums.end());
    solve(0,prev,n,nums,ans,temp,dp);

return temp;







//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//           vector<int>dp(n,1),hash(n);
//           int maxi=1;
//           int lastind=0;
//           for(int i=0;i<n;i++){
//             hash[i]=i;
//             for(int j=0;j<i;j++){
            
//             if(nums[i]%nums[j]==0 && 1+dp[j]>dp[i]){
//                 dp[i]=1+dp[j];
//                 hash[i]=j;
//             }


//             }
//             if(dp[i]>maxi){
//                 maxi=dp[i];
//                 lastind=i;
//             }
//           }
// vector<int>temp;
// temp.push_back(nums[lastind]);
// while(hash[lastind]!=lastind){
//       lastind=hash[lastind];
//       temp.push_back(nums[lastind]);
// }
// vector<int>ans;
// reverse(temp.begin(),temp.end());
// for(auto it:temp){ 
//     ans.push_back(it);

// }
// return ans;
    }
};