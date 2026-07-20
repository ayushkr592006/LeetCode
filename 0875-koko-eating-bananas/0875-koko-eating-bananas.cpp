class Solution {
public:
   void solve(int low,int high,vector<int>& piles, int h,int &ans){
   
   if(low>high)return;

   int mid=(low+high)/2;
  
 long long  cnt=0;
 for(int i=0;i<piles.size();i++){
    cnt+=ceil((double)piles[i]/mid);

 }
 if(cnt>h)solve(mid+1,high, piles, h,ans);

 else if(cnt<=h){
    ans=mid;
    solve(low,mid-1,piles,  h,ans);
 }


     




   }





    int minEatingSpeed(vector<int>& piles, int h) {
        
   int low=1;
   int high=*max_element(piles.begin(),piles.end());
int ans=high;
   solve(low,high,piles,h,ans);
return ans;

    }
};