class Solution {
public:
    int smallestNumber(int n, int t) {
     int cnt=1;
     int ans=0;
   while( 1){
    string s=to_string(n);
    cnt=1;
       for(int i=0;i<s.size();i++){
        cnt=cnt*(s[i]-'0');
       }
if(cnt%t==0){
    int p=stoi(s);
    ans= p;
    break;
}
n++;
   }

return ans;


    }
};