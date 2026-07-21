// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
void solve(int low,int high,int &ans){
if(low>high)return;
long long mid=low+(high-low)/2;
bool midi=isBadVersion(mid);

if(!midi){
   
    solve(mid+1,high,ans);
}
else {
    ans=mid;
    solve(low,mid-1,ans);
}

}
    int firstBadVersion(int n) {
        int low=1;
        int high=n;
   
   int ans=0;

   solve(low,high,ans);
return ans;

    }
};