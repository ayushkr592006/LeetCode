class Solution {
public:
 int search(int low,int high,vector<int>& nums, int target){
    if(high<low)return -1;
   
   int mid=(low+high)/2;
   int n=nums[mid];

   if(n==target)return mid;

   else if(n>target) return search(low,mid-1,nums,target);

  return  search(mid+1,high,nums,target);



 }


    int search(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size();
        int high=n-1;
return search(low,high,nums,target);


    }
};