class Solution {
public:
void solve(int low,int high,vector<int>& nums, int threshold,int &ans){

if(low>high)return;

int mid=(low+high)/2;

int sum=0;
for(int i=0;i<nums.size();i++){

sum+=ceil((double)nums[i]/mid);


}

if(sum>threshold){
    solve(mid+1,high,nums,threshold,ans);
}
else{
    ans=mid;
 solve(low,mid-1,nums,threshold,ans);
}







}



    int smallestDivisor(vector<int>& nums, int threshold) {
        

       int low=1;
       int high=*max_element(nums.begin(),nums.end());

 int ans=high;
           
       solve(low,high,nums,threshold,ans);
return ans;
    }
};