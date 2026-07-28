class Solution {
public:
    string smallestPalindrome(string s) {
        
        if(s.size()==1)return s;

       map<char,int>mpp;
       for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
       }
       vector<char>v;
int c;
        string t;
        for(auto it:mpp){
                  
                  c=(it.second)/2;
                  if(it.second%2!=0){c=c+1;
                  v.push_back(it.first);
                  }
             while(it.second!=c){
                t+=it.first;
                it.second-=1;
             }

        }
            
             
             
        string p=t;
         if(!v.empty()){reverse(v.begin(),v.end());
                       for(int i=0;i<v.size();i++){
                        t+=v[i];
                       }}
        reverse(p.begin(),p.end());
        for(int i=0;i<p.size();i++){
            t+=p[i];
        }
return t;

    }
};