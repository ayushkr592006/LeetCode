class Solution {
public:

    bool solve(int i,map<int,int>&mpp,int k,int n,vector<int>& stones, vector<vector<int>>&memo){

if(k>n)return false;

       if(i==n-1)return  memo[i][k]=  true;

    //    if(mpp.find((mpp[i].first)+k)!=mpp.end())return solve(mpp[(mpp[i].first)+k],mpp,k,n);

    //     else  if(mpp.find((mpp[i].first)+k-1)!=mpp.end())return solve(mpp[(mpp[i].first)+k-1],mpp,k-1,n);
    //          else   if(mpp.find((mpp[i].first)+k+1)!=mpp.end())return solve(mpp[(mpp[i].first)+k+1],mpp,k+1,n);

    //          return false;




    if (memo[i][k] != -1)
    return memo[i][k];
int pos = stones[i];   // current stone ki position

if (mpp.find(pos + k) != mpp.end() &&
    solve(mpp[pos + k], mpp, k, n, stones,memo))
    return memo[i][k]=true;

if (k > 1 &&
    mpp.find(pos + k - 1) != mpp.end() &&
    solve(mpp[pos + k - 1], mpp, k - 1, n, stones,memo))
    return memo[i][k]=true;

if (mpp.find(pos + k + 1) != mpp.end() &&
    solve(mpp[pos + k + 1], mpp, k + 1, n, stones,memo))
    return memo[i][k]=true;

return memo[i][k]= false;

    
    }


    bool canCross(vector<int>& stones) {
        
if(stones[1]-stones[0]!=1)return false;

  
      
     int n=stones.size();
      vector<vector<int>>memo(n,vector<int>(n+1,-1));
// memo[0][1]=1;

     map<int,int>mpp;
     for(int i=0;i<n;i++){
        mpp[stones[i]]=i;
     }
int k=1;
    if( solve(1,mpp,k,n,stones,memo))return true;

return false;


    }
};