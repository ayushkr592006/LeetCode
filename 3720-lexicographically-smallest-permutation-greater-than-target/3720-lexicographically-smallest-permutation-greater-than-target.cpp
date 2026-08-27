class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        
        string ans="";
        for(int i=0;i<target.size();i++){
            if(mpp.find(target[i])!=mpp.end()){
                ans+=target[i];
                mpp[target[i]]--;
                if(mpp[target[i]]==0)mpp.erase(target[i]);
            }
      else{
        bool found=false;
           char c=target[i]+1;
           for( c;c<='z';c++){
             if(mpp.find(c)!=mpp.end()){
                    ans+=c;
                    mpp[c]--;
                    if(mpp[c]==0)mpp.erase(c);
                    found=true;
                    break;
             }
           

           }

   if(found) {

                    for(auto p : mpp) {
                        for(int k = 0; k < p.second; k++) {
                            ans += p.first;
                        }
                    }

                    return ans;
                }



                for (int j = ans.size() - 1; j >= 0; j--) {

                    // Return ans[j] back to map
                    mpp[ans[j]]++;

                    // Try to find a character bigger than ans[j]
                    auto it = mpp.upper_bound(ans[j]);

                    if (it != mpp.end()) {

                        // Replace ans[j] with this bigger character
                        char bigger = it->first;

                        ans[j] = bigger;
                        mpp[bigger]--;

                        if (mpp[bigger] == 0)
                            mpp.erase(bigger);

                        // Append remaining characters in sorted order
                        for (auto p : mpp) {
                            for (int k = 0; k < p.second; k++) {
                                ans += p.first;
                            }
                        }

                        return ans;
                    }

                    // Otherwise continue going backwards
                    ans.pop_back();
                }
                return "";
      }
              }

 if(ans == target) {

        for(int j = ans.size() - 1; j >= 0; j--) {

            mpp[ans[j]]++;

            auto it = mpp.upper_bound(ans[j]);

            if(it != mpp.end()) {

                char bigger = it->first;

                ans[j] = bigger;

                mpp[bigger]--;

                if(mpp[bigger] == 0)
                    mpp.erase(bigger);

                for(auto p : mpp) {
                    for(int k = 0; k < p.second; k++) {
                        ans += p.first;
                    }
                }

                return ans;
            }

            ans.pop_back();
        }
    }

    return "";
}
};