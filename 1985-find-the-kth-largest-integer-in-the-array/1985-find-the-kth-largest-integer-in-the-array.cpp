class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        int n=nums.size();


// long long num=0;
// vector<int>ans;
// for(int i=0;i<nums.size();i++){
//      string s=nums[i];
//      for(auto c:s){
//         int m=c-'0';
//          num=num*10+m;
         
//      }
//         ans.push_back(num);
//         num=0;
// }


//   sort(ans.begin(),ans.end());
//    string val=to_string(ans[n-k]);
// return val;


sort(nums.begin(),nums.end(),[](string &a ,string &b){
    if(a.size()!=b.size())
    return  a.size()<b.size();
    return a<b;
});

return nums[n-k];
    }
};