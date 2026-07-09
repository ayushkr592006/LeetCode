class Solution {
public:
   vector<int>parent;
   int findparent(int u){
    if(u==parent[u]){
        return u;
    }

    return parent[u]=findparent(parent[u]);


   }


void unio(int u,int v){

   int ul_u=findparent(u);
   int ul_v=findparent(v);
   if(ul_u!=ul_v) parent[ul_u]=ul_v;


}



    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxdiff, vector<vector<int>>& queries) {
        
parent.resize(n);
for(int i=0;i<n;i++){
    parent[i]=i;
}

  for(int i=0;i<n-1;i++){
    if(abs(nums[i]-nums[i+1])<=maxdiff){
        unio(i,i+1);
    }
  }
vector<bool>ans;
for(int i=0;i<queries.size();i++){
    if(findparent(queries[i][0])==findparent(queries[i][1])){
        ans.push_back(true);
    }
    else ans.push_back(false);
}
return ans;
    }
};