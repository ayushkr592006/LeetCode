class Solution {
public:
int solve(int low,int high,vector<int>& nums){
 
     int mid=(low+high)/2;
     //check part
     if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])return nums[mid];

       //Elimination part
//left elimination->even odd

         if((nums[mid]==nums[mid-1] && mid%2!=0) ||(nums[mid]==nums[mid+1] && mid%2==0)){
                   return  solve(mid+1,high,nums);
         }

  
                   return  solve(low,mid-1,nums);
         




}


    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();

//conditions to check

if(n==1)return nums[0];
if(nums[0]!=nums[1]) return nums[0];
if(nums[n-1]!=nums[n-2])return nums[n-1];




    int high=n-2;
    int low=1;

  return solve(low,high,nums);


    }
};