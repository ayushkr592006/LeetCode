class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        
    vector<vector<pair<int,double>>>adj(n);
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
        adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
    }

 priority_queue<pair<double,int>>pq;
 pq.push({1,start_node});
 vector<double>dist(n,-1);
 dist[start_node]=1;
 while(!pq.empty()){
   
   double prob=pq.top().first;
   int node=pq.top().second;
   pq.pop();
   for(auto it:adj[node]){
    double proba=it.second;
    int nod=it.first;

    if(dist[nod]<prob*proba){
        dist[nod]=prob*proba;
        pq.push({dist[nod],nod});
    }

   }


 }

 return   dist[end_node]>0 ? dist[end_node]:0;



    }
};