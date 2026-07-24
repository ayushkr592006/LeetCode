class Solution {
public:

bool solve(int low,int high,vector<int>&nums,int target){
    if(low>high)return false;


    int mid=(low+high)/2;
    if(nums[mid]==target)return true;

    if(nums[mid]<target)return solve(mid+1,high,nums,target);
    else return solve(low,mid-1,nums,target);


}


    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

     for(int i=0;i<n;i++){
    //  if(matrix[i][m-1]<target  || matrix[i][0] >target) continue;
    
       int low=0;
       int high=m-1;
       
       if(solve(low,high,matrix[i],target))return true;
    




      



     }

return false;

    }
};