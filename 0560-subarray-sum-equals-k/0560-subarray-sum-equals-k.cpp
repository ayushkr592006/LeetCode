class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      
//Aproach->we will solve this problem by prefix sum
int n=nums.size();
map<int,int>mpp;
mpp[0]=1;
int cnt=0;
int sum=0;

for(int i=0;i<n;i++){
    sum+=nums[i];
    int p=sum-k;

   if(mpp.find(p)!=mpp.end()){
    cnt+=mpp[p];
    mpp[sum]++;
   }
   else{
     mpp[sum]++;
   } 
}
return cnt;



    }
};