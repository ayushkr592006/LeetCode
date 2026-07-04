class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int n=words.size();
       vector<int>mp(26);
       for(int i=0;i<26;i++){
          mp[order[i]-'a']=i;
       }
        for(int i=0;i<n-1;i++){
            string s=words[i];
            string t=words[i+1];
           int p=s.size();
           int q=t.size();
           for(int j=0;j<min(p,q);j++){
                    if(mp[s[j]-'a'] < mp[t[j]-'a']) break;
                  else  if(mp[s[j]-'a']>mp[t[j]-'a']) return false;
           }
        //    if(p>q) return false;
           if(p > q && s.substr(0, q) == t) return false;


        }
        return true;
    }
};