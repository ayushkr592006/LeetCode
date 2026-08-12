class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int length=0;
        int ans=0;
        int last=0;
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0; i<n;i++){
            mpp[nums[i]]++;
        
        if(mpp[nums[i]]<=k){
            length++;
         ans=max(length,ans);
        }
          else{
          
           int p=last;
           while(mpp[nums[i]]>k){
            mpp[nums[p]]--;
            p++;
            length--;
           }
last=p;
length++;

          }



        }
return ans;



    }
};