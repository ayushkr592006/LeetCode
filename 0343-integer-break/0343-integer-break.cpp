class Solution {
public:
    int integerBreak(int n) {
        int maxi=INT_MIN;
       for(int i=2;i<=n;i++){
       int part=n/i;
       int c=n%i;
       vector<int>v;
       int j=1;
       for(;j<=c;j++)v.push_back(part+1);
       for(;j<=i;j++)v.push_back(part);
       long long cnt=1;
       for(int k=0;k<v.size();k++)cnt=cnt*v[k];
       if(cnt>maxi)maxi=cnt;

       }
return maxi;

    }
};