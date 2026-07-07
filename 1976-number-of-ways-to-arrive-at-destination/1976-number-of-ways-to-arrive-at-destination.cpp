class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        const int mod = 1000000007;

        
        vector<vector<pair<int,long long>>> adj(n);
        for (int i = 0; i < roads.size(); i++) {
            adj[roads[i][0]].push_back({roads[i][1], roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0], roads[i][2]});
        }

        
        vector<long long> dis(n, 1e18);
        vector<long long> ways(n, 0);

        dis[0] = 0;
        ways[0] = 1;

        priority_queue<
            pair<long long,int>,
            vector<pair<long long,int>>,
            greater<pair<long long,int>>
        > pq;

        pq.push({0, 0});

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();

            long long dist = it.first;
            int node = it.second;

            if (dist > dis[node]) continue;

            for (auto itr : adj[node]) {
                int nxtnode = itr.first;
                long long weight = itr.second;

                if (dis[nxtnode] > dis[node] + weight) {
                    dis[nxtnode] = dis[node] + weight;
                    ways[nxtnode] = ways[node];
                    pq.push({dis[nxtnode], nxtnode});
                }
                else if (dis[nxtnode] == dis[node] + weight) {
                    ways[nxtnode] = (ways[nxtnode] + ways[node]) % mod;
                }
            }
        }

        return ways[n-1] % mod;
    }
};
