class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        for(int i=0;i<n;i++){
         int a=nums[i];
          for(int j=i+1;j<n;j++){
            int b=nums[j];
            int left=j+1;
            int right=n-1;

            while(left <right){
                long long sum=(long long)a+b+nums[left]+nums[right];
               if(sum==target){
                    vector<int>p;
                    p.push_back(a);
                     p.push_back(b);
                      p.push_back(nums[left]);
                       p.push_back(nums[right]);
                       st.insert(p);

               while(left<right && nums[left]==nums[left+1]) left++;
                while(left<right && nums[right]==nums[right-1]) right--;
                left++;
                right--;

               }
               else if(sum<target) left++;
               else right--;



            }
          }


        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};