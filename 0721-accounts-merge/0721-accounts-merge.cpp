class Solution {
public:
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




vector<int>parent;
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
     
   int n=accounts.size();
    map<string,int>mpp;
    parent.resize(n);
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
   
   for(int i=0;i<n;i++){

    for(auto it:accounts[i]){
     if(it==accounts[i][0])continue;
        if(mpp.find(it)!=mpp.end()){
            unio(i,mpp[it]);
        }
        else mpp[it]=i;
    }


   }


//har email ko uske merged account me push karna hua

map<int,vector<string>>mp;

for(auto it:mpp){
string account=it.first;
    int node=it.second;
int father=findparent(node);
mp[father].push_back(account);

}



//ab answer banana h




   vector<vector<string>>ans;

for(auto it:mp){

int idx=it.first;
vector<string>temp;
temp.push_back(accounts[idx][0]);

sort(it.second.begin(),it.second.end());
for(auto itr:it.second){
    temp.push_back(itr);
}
ans.push_back(temp);


}

    

return ans;




    }
};