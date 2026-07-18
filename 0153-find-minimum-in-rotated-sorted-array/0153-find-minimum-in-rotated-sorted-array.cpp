class Solution {
public:
  void searche(int low,int high,vector<int>& nums,int &mini){
if(high<low)return;
int mid=(low+high)/2;
mini=min(mini,nums[mid]);
(searche(low,mid-1,nums,mini),searche(mid+1,high,nums,mini));




 }



    int findMin(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums[0];
        int n=nums.size();
   int low=0;
   int high=n-1;
   int mini=INT_MAX;

 searche(low,high,nums,mini);

return mini;



    }
};