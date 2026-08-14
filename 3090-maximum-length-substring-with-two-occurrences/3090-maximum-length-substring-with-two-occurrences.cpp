class Solution {
public:
    int maximumLengthSubstring(string s) {
        // string t=s;
        // sort(t.begin(),t.end());
        // int cnt=0;
        // for(int i=0;i<s.size()-1;i++){
        //     if(t[i]!=t[i+11])cnt++;
        // }
         
map<int,int>mpp;
int last=0;
int len=0;
int maxi=0;
for(int i=0;i<s.size();i++){
mpp[s[i]]++;
len++;

    int t=last;
while(mpp[s[i]]>2 ){
       mpp[s[t]]--;
       len--;
       last++;
       t++;   
}
maxi=max(len,maxi);






}
maxi=max(len,maxi);
return maxi;
    }
};