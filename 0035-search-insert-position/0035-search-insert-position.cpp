class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //iss question me ham sirf lower bound find karenge

       return lower_bound(nums.begin(),nums.end(),target)-nums.begin();





    }
};