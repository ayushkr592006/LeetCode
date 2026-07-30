class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int cnt=0;
        if(n<=8)cnt+=n;
else if(n>8){
      int c=1;
      int p=1;
      while(n>0){
           if(p<=8){
            cnt+=c;
            n-=1;
            p++;
           }
            else  {
                c++;
                // cnt+=c;
                // n-=1;
                p=1;

            }
      }




}
     return cnt;    

    }
};