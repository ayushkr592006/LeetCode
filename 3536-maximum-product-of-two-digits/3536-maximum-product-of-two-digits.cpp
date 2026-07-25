class Solution {
public:
    int maxProduct(int n) {
       
        string s=to_string(n);
        sort(s.begin(),s.end());
   int t=s.size();
        int a=s[t-1]-'0';
       int b=s[t-2]-'0';
       return a*b;



    }
};