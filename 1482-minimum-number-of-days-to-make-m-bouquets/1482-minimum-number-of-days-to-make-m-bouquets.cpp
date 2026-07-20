class Solution {
public:
void solve(int low,int high,vector<int>& bloomDay,int &ans,int m, int k){

if(low>high)return;

int mid=(low+high)/2;
int cnt=0;
int check=0;
for(int i=0;i<bloomDay.size();i++){
 if(mid>=bloomDay[i]){
    check++;
 }
else check=0;
 if(check>=k){
    cnt++;
    check=0;
 }
 

}
if(cnt>=m){
    ans=mid;
solve(low,mid-1,bloomDay,ans,m,k);
}
else 
solve(mid+1,high,bloomDay,ans,m,k);



}



    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1ll*m*k>bloomDay.size())return -1;
    
    int ans=*max_element(bloomDay.begin(),bloomDay.end());

    int low=*min_element(bloomDay.begin(),bloomDay.end());
    int high=ans;

    solve(low,high,bloomDay,ans,m,k);
    return ans;


    }
};