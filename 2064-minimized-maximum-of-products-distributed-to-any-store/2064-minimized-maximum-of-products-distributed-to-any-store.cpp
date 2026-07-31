class Solution {
public:
void solve(int low,int high,int &ans,int n,vector<int>& quantities){

if(low>high)return;
int cnt=0;
int mid=low+(high-low)/2;
for(int i=0;i<quantities.size();i++){
    int c=ceil((double)quantities[i]/mid);
    cnt+=c;
}

if(cnt>n){

solve(mid+1,high,ans,n,quantities);
}
else{
    ans=mid;
solve(low,mid-1,ans,n,quantities);
}
}


    int minimizedMaximum(int n, vector<int>& quantities) {
        int low=1;
        int high=*max_element(quantities.begin(),quantities.end());

        int ans=high;
        solve(low,high,ans,n,quantities);
        return ans;
    }
};