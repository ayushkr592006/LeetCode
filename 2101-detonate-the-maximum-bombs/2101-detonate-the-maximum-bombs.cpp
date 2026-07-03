class Solution {
public:
int dfs(int i,  vector<vector<int>>&adj,int &count ,vector<int>&vis){
    vis[i]=1;
    count++;

    for(auto &it:adj[i]){
      if(vis[it]==0)  dfs(it,adj,count,vis);
    }
    return count;

}



    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size();
         int ans=0;
         vector<vector<int>>adj(n);

//first check reachability of ith bomb to jth bomb
         for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                if(i==j) continue;
           
           long long x1=bombs[i][0];
           long long y1=bombs[i][1];
           long long r=bombs[i][2];

           long long x2=bombs[j][0];
           long long y2=bombs[j][1];

           long long dx=x2-x1;
           long long dy=y2-y1;

           long long dist=dx*dx+dy*dy;

           if(dist<=r*r){
            adj[i].push_back(j);

              }
         }
         
          
         for(int i=0;i<n;i++){
            {
            
                int count=0;
                 vector<int>vis(n,0);
                int p=dfs(i,adj,count,vis);
                ans=max(ans,p);
            }
         }
         }
return ans;
    }
};