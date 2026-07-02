class Solution {
public:
    string minWindow(string s, string t) {
        
      int n=s.size();
      int m=t.size();
      map<char,int>mpp;
      for(int i=0;i<m;i++){
        mpp[t[i]]++;
      }
      int start=-1;

      int l=0,r=0,cnt=0,minlength=INT_MAX;

      while(r<n){
       
       if(mpp.find(s[r])!=mpp.end()){
        mpp[s[r]]--;

        if(mpp[s[r]]>=0) cnt++;
       }

      while(cnt == m){
   if(r - l + 1 < minlength) {
                    minlength = r - l + 1;
                    start = l;
                }
    if(mpp.find(s[l]) != mpp.end()){
        mpp[s[l]]++;

        if(mpp[s[l]] > 0)
            cnt--;
    }

    l++;
}

  
r++;

      }
      if(start==-1) return "";

      return s.substr(start,minlength);


    }
};