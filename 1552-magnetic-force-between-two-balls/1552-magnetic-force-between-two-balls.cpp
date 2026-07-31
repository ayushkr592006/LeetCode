class Solution {
public:
void solve(int low,int high,int &ans,vector<int>& position, int m){
if(low>high)return;

int mid=low+(high-low)/2;

int cnt=1;
int p=position[0];

for(int i=1;i<position.size();i++){
if(position[i]-p>=mid){
    cnt++;
    p=position[i];
    }


}
if(cnt>=m){
    ans=mid;
    solve(mid+1,high,ans,position,m);
}
else solve(low,mid-1,ans,position,m);



}



    int maxDistance(vector<int>& position, int m) {

      int n=position.size();  
   int low=1;
   int high=*max_element(position.begin(),position.end());
 
  sort(position.begin(),position.end());
   int ans=n-1;
   solve(low,high,ans, position,m);
return ans;
    }
};