class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int odd=INT_MAX;
        int n=nums.size();
        int idx=-1;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0 && odd>nums[i]){
                odd=nums[i];
                idx=i;
            }
          
        }
        if(odd==INT_MAX)return true;

       vector<int>ans1;
       vector<int>ans2;
      //odd banate h;

for(int i=0;i<n;i++){
    if(nums[i]%2==0 && nums[i]-odd>=1 &&idx!=i){
             ans1.push_back(nums[i]-odd);
    }
    else if(nums[i]%2!=0)ans1.push_back(nums[i]);
    else return false;
}



return true;

    }
};