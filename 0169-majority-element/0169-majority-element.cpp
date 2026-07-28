class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
       int cnt=0;
       int element=0;
       for(int i=0;i<n;i++){
        if(cnt==0){element=nums[i];
        cnt++;}
        else if(element==nums[i])cnt++;
        else cnt--;

       }

return element;

    }

        // unordered_map<int,int>mp;
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        // }
        // int c=0;
        // for(auto it:mp){
        //    if(it.second>(n/2)){
        //     c=  it.first;
        //    }
        //     }
        //     return c;
        // }
        
    
};