class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        int n=in.size();
        int cnt=0;
        sort(in.begin(),in.end(),[](vector<int>a,vector<int>b){
         if(a[0]==b[0] )return a[1]>b[1];
         
            return a[0]<b[0];});

// vector<pair<pair<int,int>,int>>v(n);
// for(int i=0;i<n;i++){
//     v[i].first.first=intervals[i][0];
//     v[i].first.second=intervals[i][1];
//     v[i].second=i;
// }

vector<int>cover(n,0);
for(int i=0;i<n-1;i++){
    if(cover[i]==1)continue;
       for(int j=i+1;j<n;j++){
        if(in[i][0]<=in[j][0] && in[i][1]>=in[j][1]){
            cover[j]=1;
          
        }
        else break;
       }
      
}
for(int i=0;i<cover.size();i++){
    if(!cover[i])cnt++;
}

return cnt;
    }
};