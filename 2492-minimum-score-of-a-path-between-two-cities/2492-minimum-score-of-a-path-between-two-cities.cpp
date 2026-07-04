class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {

          vector<vector<pair<int,int>>>adj(n+1);
          for(int i=0;i<roads.size();i++){
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
             adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
          }
          vector<int>vis(n+1,0);

             queue<pair<int,int>>q;
             q.push({1,0});
             vis[1]=1;
             int ans=INT_MAX;

             while(!q.empty()){
                 int node=q.front().first;
                 int dis=q.front().second;
                 q.pop();
                    
                 for(auto it:adj[node]){
                    int nod=it.first;
                    int  dist=it.second;
                         
                         if(!vis[nod]){
                            vis[nod]=1;
                           
                            q.push({nod,dist});
                         }
                          ans=min(ans,dist);
                        

                 }

             }
             return ans;
       
    }
};