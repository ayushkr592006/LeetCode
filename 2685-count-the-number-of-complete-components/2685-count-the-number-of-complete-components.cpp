class Solution {
public:
pair<int,int> dfs(int i,int &count,vector<vector<int>>&adj,vector<int>&vis,int &node){
vis[i]=1;
node++;
for(auto it:adj[i]){
    count++;
    if(!vis[it]){
        
        dfs(it,count,adj,vis,node);
    }
}
return{ count,node};

}



    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        
        vector<vector<int>>adj(n);
         
         for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
             adj[edges[i][1]].push_back(edges[i][0]);
         }
int ans=0;
    vector<int>vis(n,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
    int count=0;
    int node=0;
       
       auto[ cnt,nde]= dfs(i,count,adj,vis,node);
          

          if(cnt/2==((nde*(nde-1))/2)){
            ans++;
          }

       
        }
    }
return ans;

    }
};