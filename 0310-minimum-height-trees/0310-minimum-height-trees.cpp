// class Solution {
// public:
  
//   void  dfs(int i,int &b,vector<vector<int>>&adj,vector<int>&vis,int &d){

// vis[i]=1;
// d++;
// for(auto it:adj[i]){
//     if(!vis[it]){
//         dfs(it,b,adj,vis,d);
//     }
// }
// b=max(d,b);
// d--;


//   }

//
    // vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        
//      vector<vector<int>>adj(n);
//      for(int i=0;i<edges.size();i++){
//         adj[edges[i][0]].push_back(edges[i][1]);
//          adj[edges[i][1]].push_back(edges[i][0]);
//      }

//      vector<int>v;

//      for(int i=0;i<n;i++){
//         int b=INT_MIN;
//         int d=0;
//         vector<int>vis(n,0);
//      dfs(i,b,adj,vis,d);
//      v.push_back(b);
//      }
//      vector<int>ans;
// int c=*min_element(v.begin(),v.end());

//      for(int i=0;i<n;i++){
//           if(v[i]==c){
//             ans.push_back(i);
//           }
//      }


// return ans;

//     }
// };



//ye waala aise hoga


class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) return {0};       // single node case
        if (n == 2) return {0, 1};    // dono hi centers honge

        vector<vector<int>> adj(n);
        vector<int> degree(n, 0);

        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
            degree[e[0]]++;
            degree[e[1]]++;
        }

        // pehla layer: saare leaves (degree == 1)
        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (degree[i] == 1) q.push(i);
        }

        int remaining = n;

        while (remaining > 2) {
            int sz = q.size();
            remaining -= sz;

            for (int i = 0; i < sz; i++) {
                int leaf = q.front(); q.pop();

                for (auto neighbor : adj[leaf]) {
                    degree[neighbor]--;
                    if (degree[neighbor] == 1) {
                        q.push(neighbor);
                    }
                }
            }
        }

        // jo bacha (1 ya 2 nodes) queue mein, wahi answer hai
        vector<int> ans;
        while (!q.empty()) {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};