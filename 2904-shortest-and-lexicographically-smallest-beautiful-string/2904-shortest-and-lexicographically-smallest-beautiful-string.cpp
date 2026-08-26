class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int temp=0;
        string ans="";
          int vals;
        int len;
        for(int i=0;i<n;i++){
            temp=0;
            len==INT_MAX;;
            vals=0;
            string val="";
              for(int j=i;j<n;j++){
                 val+=s[j];
                 vals++;
                 if(s[j]=='1'){temp++;
                
                 }
                if(temp >= k && (vals < len || (vals == len && val < ans))) {
    ans = val;
    len = vals;
}
             


                 
              }
        }
        return ans;
    }
};