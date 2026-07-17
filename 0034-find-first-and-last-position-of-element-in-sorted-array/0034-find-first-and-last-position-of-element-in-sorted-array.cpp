class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
    int lower=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
int upper=upper_bound(nums.begin(),nums.end(),target)-nums.begin();

vector<int>ans;

if( lower==nums.size() || nums[ lower]!=target) ans.push_back(-1);
else ans.push_back(lower);

 if(upper-1<0 || nums[upper-1]!=target ) ans.push_back(-1);
else ans.push_back(upper-1);

return ans;

    }
};