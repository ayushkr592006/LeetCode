class Solution {
public:
int solve(int low,int high,vector<int>& nums){

int mid=(low+high)/2;

if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])return mid;

//Elimination

if(nums[mid]>nums[mid-1]){
  return solve(mid+1,high,nums);

}
return solve(low,mid-1,nums);








}



    int findPeakElement(vector<int>& nums) {
        
        //sorted h then sidha binary search pe aao aur socho ki kaise left aur right ko eliminate karroge

   int n=nums.size();
   if(n==1)return 0;
   
   else if(nums[0]>nums[1])return 0;

   else if(nums[n-1]>nums[n-2])return n-1;


int low=1;
int high=n-2;

return solve(low,high,nums);

        





    }
};