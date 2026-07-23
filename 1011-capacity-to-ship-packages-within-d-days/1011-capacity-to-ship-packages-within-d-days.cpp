class Solution {
public:
void solve(int low,int high,int days,int &ans,vector<int>& weights){

if(low>high)return;

int mid=(low+high)/2;
int temp=mid;
int cnt=1;
int i=0;
while(i<weights.size()){

if(temp>=weights[i]) {temp=temp-weights[i];
i++;}



 else {
    temp=mid;
    cnt++;
   
 }
 


}

if(cnt<=days){
    ans=mid;
    solve(low,mid-1,days,ans,weights);

}

else solve(mid+1,high,days,ans,weights);

}



    int shipWithinDays(vector<int>& weights, int days) {
        
  int low=*max_element(weights.begin(),weights.end());
  int high=0;
  for(int i=0;i<weights.size();i++){
    high+=weights[i];
  }
int ans=high;
  solve(low,high,days,ans,weights);
return ans;


    }
};