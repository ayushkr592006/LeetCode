class Solution {
public:
    string smallestSubsequence(string s) {
     
       map<char,int>mpp;
       for(int i=0;i<s.size();i++){
        mpp[s[i]]=i;
       }
       vector<int>vis(26);

       stack<char>st;
       for(int i=0;i<s.size();i++){
        if(vis[s[i]-'a'])
    continue;
        while( !st.empty()  &&  s[i]<st.top() &&mpp[st.top()]>i){
            vis[st.top()-'a']=0;
                st.pop();
                

        
            
        }
          if(vis[s[i]-'a']==0){ st.push(s[i]);
             vis[s[i]-'a']=1;
          }
       }
        string t="";
        while(!st.empty()){

           char c=st.top();
           st.pop();
           t+=c;
        }
        reverse(t.begin(),t.end());
        return t;

    }
};