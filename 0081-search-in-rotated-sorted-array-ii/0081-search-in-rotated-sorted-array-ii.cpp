class Solution {
public:
int searche(vector<int>& nums, int target,int n,int low,int high){
if(high<low)return -1;


int mid=(low+high)/2;

if(nums[mid]==target)return mid;

//find the sorted half

//check left
if(nums[low] == nums[mid] && nums[mid] == nums[high]) {
   return searche(nums, target, n, low + 1, high - 1);
}

else if(nums[low]<=nums[mid]){

    
   if(nums[low]<=target && target <nums[mid]){
return searche(nums,target,n,low,mid-1);}
   
 else return searche(nums,target,n,mid+1,high);

       




}
else
{

        if(target>nums[mid] && nums[high]>=target){
            return searche(nums,target,n,mid+1,high);
        }
        else return searche(nums,target,n,low,mid-1);
    
}





}
    bool search(vector<int>& nums, int target) {
              int n=nums.size();
    //     int c=0;
    //     int ans=0;
    //     for(int  i=0;i<n;i++){
    //         if(nums[i]==target) {ans= i;
    //             break;
    //         }
    //         else c++;
    //     }
    //     if(c==n) return -1;
    //     return ans;
    int low=0;
    int high=n-1;
  int c= searche(nums,target,n,low,high);
if(c!=-1)return true;
return  false;
    }
};