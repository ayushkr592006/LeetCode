class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)zero++;
            else {
                nums[j]=nums[i];
                j++;
            }
        }
        for( j;j<nums.size();j++){
            nums[j]=0;
        }

    }
};