class Solution {
public:
int fun(vector<int>& nums, int k){
      int l=0,r=0,cnt=0;
          int n=nums.size();
          int ans=0;

          while(r<n){
           
            if(nums[r]%2!=0)cnt++;

            while(cnt>k && l<n){
                if(nums[l]%2!=0)cnt--;
              l++;
            }
          ans+=r-l+1;
      r++;
          }
          return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
       
       return (fun(nums,k)-fun(nums,k-1));

    }
};