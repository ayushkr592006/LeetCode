//first i will find the no. of comnnected components then apply dsu to find the extra edges


class Solution {
public:

vector<int>parent;








void dfs(int i,vector<int>&vis,vector<vector<int>>&adj){
    vis[i]=1;
    for(auto it:adj[i]){
        if(!vis[it])dfs(it,vis,adj);
    }
}
int findparent(int u){
    if(u==parent[u])return u;
    return parent[u]=findparent(parent[u]);
}
void unio(int u,int v){
    int ul_u=findparent(u);
    int ul_v=findparent(v);
    if(ul_u==ul_v)return;
    parent[ul_u]=ul_v;
}


    int makeConnected(int n, vector<vector<int>>& connections) {
        
vector<int>vis(n);
vector<vector<int>>adj(n);
for(int i=0;i<connections.size();i++){
    adj[connections[i][0]].push_back(connections[i][1]);
    adj[connections[i][1]].push_back(connections[i][0]);
}
int cmpnt=0;
for(int i=0;i<n;i++){
    if(vis[i]==0){
        cmpnt++;
        dfs(i,vis,adj);
    }
}

parent.resize(n);
for(int i=0;i<n;i++){
    parent[i]=i;
}
int extra=0;
for(int i=0;i<connections.size();i++){

if(findparent(connections[i][0])==findparent(connections[i][1]))extra++;
else unio(connections[i][0],connections[i][1]);

}

if(cmpnt-1>extra)return -1;
 return cmpnt-1;



    }
};