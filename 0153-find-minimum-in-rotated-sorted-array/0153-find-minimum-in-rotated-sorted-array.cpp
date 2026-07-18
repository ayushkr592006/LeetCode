class Solution {
public:
  void searche(int low,int high,vector<int>& nums,int &mini){
if(high<low)return;
int mid=(low+high)/2;

//check for sorted half

//left check

if(nums[mid]>=nums[low]){
     
     mini=min(mini,nums[low]);

     searche(mid+1,high,nums,mini);

}

else{
   if(mid+1<nums.size()) mini=min(mini,nums[mid]);
    searche(low,mid-1,nums,mini);
}





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