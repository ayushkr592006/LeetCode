//we  just have to find greafer than equal to elements from the g

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        map<int,int>mpp;
        for(int i=0;i<m;i++){
         mpp[s[i]]++;

        }
int cnt=0;
sort(g.begin(),g.end());
     for(int i=0;i<n;i++){
       auto lower=mpp.lower_bound(g[i]);


        if(lower!=mpp.end()){
            cnt++;
            lower->second--;
            if(lower->second==0)mpp.erase(lower);
        }
          

     }

return cnt;


    }
};