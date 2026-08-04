class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
      vector<int>v;
      int lower=*min_element(nums.begin(),nums.end());
        int higher=*max_element(nums.begin(),nums.end());
      for(int i=lower;i<=higher;i++){
        if(mpp.find(i)==mpp.end())v.push_back(i);
      }
return v;
    }
};