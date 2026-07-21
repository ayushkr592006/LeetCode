class Solution {
public:
void solve(int low,int high,int x,int &ans){
    if(low>high)return;

    int mid=(low+high)/2;

    if(1ll*mid*mid>x){
        solve(low,mid-1,x,ans);
    }
    else{
        ans=mid;
        solve(mid+1,high,x,ans);
    }




}
     
    int mySqrt(int x) {
        if(x==1)return 1;
        int low=1;
        int high=x/2;
        int ans=0;
        solve(low,high,x,ans);
        return ans;
    }
};