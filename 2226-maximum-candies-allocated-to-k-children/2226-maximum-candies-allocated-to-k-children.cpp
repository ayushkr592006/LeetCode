class Solution {
void solve(int low,int high,vector<int>& candies, long long k,int &ans){

if(low>high)return;

int mid=(low+high)/2;
long long cnt=0;
for(int i=0;i<candies.size();i++){
cnt+=(candies[i]/mid);

}

if(cnt>=k){
    ans=mid;
    solve(mid+1,high,candies,k,ans);
}
else solve(low,mid-1,candies,k,ans);



}




public:
    int maximumCandies(vector<int>& candies, long long k) {
        
    int low=1;
    int high=*max_element(candies.begin(),candies.end());

    int ans=0;
    solve(low,high,candies,k,ans);
return ans;

    }
};