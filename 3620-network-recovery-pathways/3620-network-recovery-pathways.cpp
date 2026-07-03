class Solution {
public:
    bool check(vector<vector<pair<int,int>>>& adj, vector<bool>& online, long long k, int x){
        int n =adj.size();
        if(!online[0] || !online[n-1]) return false;
        vector<long long> dist(n, 1e18);
        dist[0] = 0;
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long, int>>> pq;
        pq.push({0,0});
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int u = it.second;
            long long d = it.first;
            if(d > dist[u]) continue;
            for(auto& it : adj[u]){
                int v = it.first;
                int wt = it.second;
                if(d + wt < dist[v] && online[v] && wt >= x){
                    dist[v] = d + wt;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist[n-1] <= k;
    }

    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        int n = online.size();
        vector<vector<pair<int,int>>> adj(n);
        int maxi = 0;
        for(auto& e : edges){
            int u = e[0];
            int v = e[1];
            int wt = e[2];
            adj[u].push_back({v, wt});
            maxi = max(maxi, wt);
        }
        int l = 0;
        int h = maxi;
        int ans = -1;
        while(l <=h){
            int mid = l +(h-l)/2;
            if(check(adj, online, k, mid)){
                ans = mid;
                l = mid + 1;
            }
            else{
                h = mid-1;
            }
        }
        return ans;
    }
};