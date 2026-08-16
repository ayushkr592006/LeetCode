class Solution {
public:

    bool stoneGameIX(vector<int>& stones) {
  int n=stones.size();
int cnt1=0,cnt2=0,cnt3=0;
for(int i=0;i<n;i++){
    if(stones[i]%3==0)cnt1++;
    else if(stones[i]%3==1)cnt2++;
    else cnt3++;
}

if(cnt1%2==0  && cnt2>0 && cnt3>0)return true;
else if( cnt1%2!=0  &&   abs(cnt2-cnt3)>2)return true;
return false;



    }
};