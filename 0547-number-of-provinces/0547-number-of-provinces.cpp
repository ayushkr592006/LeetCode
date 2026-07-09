class Solution {
private:
vector<int>parent;
    // void dfs(int node,vector<vector<int>> &adjls, vector<int> &vis){
    //     vis[node] = 1;
    //     for(auto it: adjls[node]){
    //         if(!vis[it]){
    //             dfs(it,adjls,vis);
    //         }
    //     }
    // }
    int findparent(int u){
        if(u==parent[u]){
            return u;
        }
        return parent[u]=findparent(parent[u]);
    }
  void unio(int u,int v){
    int ul_u=findparent(u);
    int ul_v=findparent(v);
    if(ul_u==ul_v)return;
    parent[ul_u]=ul_v;
  }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int m=isConnected[0].size();
        // int n=isConnected.size();
        // vector<vector<int>> adjls(n);
        // //adjacency matrix diya hua tha ussse adjacency list me convert kar diya h taaki aasan rhe
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(isConnected[i][j] == 1 && i!=j){
        //             adjls[i].push_back(j);
        //             adjls[j].push_back(i);
        //         }
        //     }
        // }
        // vector<int>vis(n,0);
        // int ct=0;
        // for(int i=0;i<n;i++){
        //     if(vis[i] == 0){
        //         ct++;
        //         dfs(i,adjls,vis);
        //     }
        // }
   
         

        // return ct;
//DSU METHOD

parent.resize(n);
for(int i=0;i<n;i++){
    parent[i]=i;
}


for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(isConnected[i][j]==1 &&   findparent(i)==findparent(j))continue;
        else if(isConnected[i][j]==1) unio(i,j);
    }
}
int cnt=0;
for(int i=0;i<n;i++){
    if(parent[i]==i)cnt++;
}


return cnt;

    }
};
