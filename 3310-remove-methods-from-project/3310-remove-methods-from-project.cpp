class Solution {
public:
void solve(vector<int>&vis,vector<int>&vis1,int i,vector<vector<int>>&adj,int &p){

queue<int>q;
q.push(i);
vis[i]=1;
while(!q.empty()){
int node=q.front();
q.pop();
for(auto it:adj[node]){
  if(vis1[it]==1)p=9;

  if(!vis[it]  ){
    vis[it]=1;
    q.push(it);
  }


}


}



}


    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

vector<vector<int>>adj(n);
for(int i=0;i<invocations.size();i++){
    adj[invocations[i][0]].push_back(invocations[i][1]);
}


        vector<int>vis1(n,0);
        vector<int>vis2(n,0);
        int p=0;
        for(int i=0;i<n;i++){
        if(i==k){

            solve(vis1,vis1,i,adj,p);
        }
        }
        p=0;
 for(int i=0;i<n;i++){
        if(i!=k  && vis1[i]==0){

            solve(vis2,vis1,i,adj,p);
        }
        }
vector<int>ans;
if(p==9){
for(int i=0;i<n;i++)ans.push_back(i);

}
else{
for(int i=0;i<n;i++){
    if(vis2[i])ans.push_back(i);
}}
return ans;

    }
};