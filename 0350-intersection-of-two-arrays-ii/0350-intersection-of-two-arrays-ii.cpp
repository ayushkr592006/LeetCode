class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mpp1;
        map<int,int>mpp2;
        for(int i=0;i<nums1.size();i++){
            mpp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mpp2[nums2[i]]++;
        }
         vector<int>ans;
         for(int i=0;i<nums1.size();i++){
            if(mpp2.find(nums1[i])!=mpp2.end()){
                  ans.push_back(nums1[i]);
                  mpp2[nums1[i]]--;
                  if(mpp2[nums1[i]]==0){
                    mpp2.erase(nums1[i]);
                  }
            }
         }
return ans;


    }
};