class Solution {
public:
bool solve(int i,int cnt,string &s, vector<vector<int>> &dp){
    int n=s.size();
    if(cnt<0)return false;
if(i==n&& cnt==0)return true;
if(i==n && cnt>0)return false;

if(dp[i][cnt]!=-1)return dp[i][cnt];

if(s[i]=='(')  return  dp[i][cnt]=solve(i+1,cnt+1,s,dp);
if(s[i]=='*'){
   if(solve(i+1,cnt+1,s,dp))return dp[i][cnt]=true;
    
    if(solve(i+1,cnt,s,dp))return dp[i][cnt]=true;
    if(solve(i+1,cnt-1,s,dp))return dp[i][cnt]=true;

}
if(s[i]==')'  )return dp[i][cnt]= solve(i+1,cnt-1,s,dp);

return dp[i][cnt]=false;

}


    bool checkValidString(string s) {
     int cnt=0;
     int n=s.size();
     vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    return solve(0,cnt,s,dp);



       

    }
};