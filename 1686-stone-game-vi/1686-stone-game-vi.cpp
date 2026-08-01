class Solution {
public:




    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {

int n=aliceValues.size();
vector<vector<int>>bothv(n,vector<int>(2,0));

for(int i=0;i<n;i++){
    bothv[i][0]=aliceValues[i]+bobValues[i];
   bothv[i][1]=i;
}

sort(bothv.begin(),bothv.end(),[](vector<int>&a,vector<int>&b){
    if(a[0]==b[0])return a[1]<b[1];
    return a[0]>b[0];
});
int sum1=0;
int sum2=0;
for(int i=0;i<n;i++){
    if(i%2==0)sum1+=aliceValues[bothv[i][1]];
    else sum2+=bobValues[bothv[i][1]];
}
if(sum1>sum2)return 1;
else if(sum1==sum2)return 0;
return -1;


    }
};