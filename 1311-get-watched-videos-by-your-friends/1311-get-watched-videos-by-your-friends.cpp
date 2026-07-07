class Solution {
public:
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        int n=friends.size();
   queue<pair<int,int>>q;
   q.push({id,0});
   vector<int>vis(n,0);
   vis[id]=1;
   vector<int>lev;
   while(!q.empty()){
 
 int node=q.front().first;
 int levl=q.front().second;
 q.pop();
 if(levl==level)lev.push_back(node);
  if (levl >= level)
        continue;
 for(auto it:friends[node]){
    if(vis[it]==0){
        vis[it]=1;
        q.push({it,levl+1});
    }
 }

     


   }
   map<string,int>mpp;
 
 for(int i=0;i<lev.size();i++){
    for(int j=0;j<watchedVideos[lev[i]].size();j++){
           mpp[watchedVideos[lev[i]][j]]++;

    } 
 }
vector<pair<string, int>> v(mpp.begin(), mpp.end());

// Sort by frequency, then lexicographically
sort(v.begin(), v.end(), [](pair<string,int> a, pair<string,int> b) {
    if (a.second == b.second)
        return a.first < b.first;   // lexicographical order
    return a.second < b.second;     // increasing frequency
});
vector<string>ans;
 for(auto it:v){
     ans.push_back(it.first);
 }
 return ans;
    }
};