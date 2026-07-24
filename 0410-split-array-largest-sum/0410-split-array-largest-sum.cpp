class Solution {
public:
void solve(int low,long long high,vector<int>& nums, int k,int &ans){

if(low>high)return;
long long  mid=low+(high-low)/2;
int cnt=1;
int arr=0;
for(int i=0;i<nums.size();i++){

  if(nums[i]+arr<=mid)arr+=nums[i];

  else {
    cnt++;
    arr=nums[i];
  }

}
 if(cnt>k){
    solve(mid+1,high,nums,k,ans);
 }
else{
    ans=mid;
    solve(low,mid-1,nums,k,ans);
}



}


    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());

        long long high=0;
        for(int i=0;i<nums.size();i++){
            high+=nums[i];
        }
          
int ans=0;
solve(low,high,nums,k,ans);

return ans;
    }
};