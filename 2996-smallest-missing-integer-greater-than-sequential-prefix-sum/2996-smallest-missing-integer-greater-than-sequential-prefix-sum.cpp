class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
int temp=nums[0];
int cnt=0;
int length=1;
map<int,int>mpp;
mpp[nums[0]]++;
int check=0;
for(int i=1;i<nums.size();i++){
    mpp[nums[i]]++;
        if(nums[i]==nums[i-1]+1 && check==0 ){
                temp+=nums[i];
        }

        else{
          check++;
        }

}
cnt=max(cnt,temp);

int ans=0;
    while(true){
       if(mpp.find(cnt)==mpp.end()){
        ans=cnt;
        break;
       }
         cnt=cnt+1;  

    }

return ans;

    }
};