class Solution {
public:
//ye approach mereko samjh nhi aya

//  bool solve(int i,int n,vector<int>& nums){
//    if(i>=n-1) return true;
//    int mini=n+1;
//         int jump = 0;
//         for(int j=1;j<=nums[i];j++){
//         if ((i +j ) <=n-1){
//             jump=1+solve((i + j), n,nums);
//        mini = min(mini, jump);
//         }
//         }
// return false;
//  }


    bool canJump(vector<int>& nums) {
        int n=nums.size();
    // return solve(0,n,nums);

        int maxidx=0;
        for(int i=0;i<n;i++){

        if(i>maxidx)return false;
         
         else maxidx=max(maxidx,i+nums[i]);



        }
        return true;


    }
};