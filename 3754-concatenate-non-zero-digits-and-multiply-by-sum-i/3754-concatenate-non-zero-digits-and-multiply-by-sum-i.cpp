class Solution {
public:
    long long sumAndMultiply(int n) {
        string x="";
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')continue;
              else x+=s[i];
        }
        if(x.size()==0) return 0;
 int sum=0;
 for(int i=0;i<x.size();i++){
    int a=x[i]-'0';
    sum+=a;
 }

 long long ans=stoll(x);
 return ans*sum;


    }
};