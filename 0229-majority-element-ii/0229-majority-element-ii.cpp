class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
//         unordered_map<int>mpp;
//         for(int i=0;i<n;i++){
//             mpp[nums[i]]++;
//         }
// int c=n/3;
// int cnt=0;
// for(auto it:mpp){
// if(it.second>=c)cnt++
// }
int cnt1=0;int cnt2=0;
int elem1=INT_MIN;int elem2=INT_MIN;

for(int i=0;i<n;i++){
    if(cnt1==0 && nums[i]!=elem2){
        elem1=nums[i];
        cnt1++;
    }
    else if(cnt2==0 && nums[i]!=elem1){
        elem2=nums[i];
        cnt2++;
    }
 else if(nums[i]==elem1)cnt1++;
 else if(nums[i]==elem2)cnt2++;

    else {
        cnt1-=1;
       cnt2-=1;

    }
}
int cnf1=0;
int cnf2=0;

for(int i=0;i<n;i++){
 if(nums[i]==elem1)cnf1++;
 else if(nums[i]==elem2)cnf2++;
}
vector<int>ans;
if(cnf1>(n/3))ans.push_back(elem1);
if(cnf2>(n/3))ans.push_back(elem2);
return ans;

    }
};