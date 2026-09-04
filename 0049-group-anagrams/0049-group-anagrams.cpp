// class Solution {
// public:
//     void check(int f, string s, vector<int>& vis,
//                vector<string>& strs, vector<vector<string>>& ans) {

//         vector<int> freq(26, 0);
//         vector<string> group;

//         group.push_back(s);

        
//         for (char c : s) {
//             freq[c - 'a']++;
//         }

//         for (int i = 0; i < strs.size(); i++) {
//             if (vis[i] == 0 && i != f) {
//                 string p = strs[i];
//                 if (p.size() != s.size()) continue;

//                 vector<int> temp = freq;
//                 bool isAnagram = true;

//                 for (char c : p) {
//                     if (temp[c - 'a'] == 0) {
//                         isAnagram = false;
//                         break;
//                     }
//                     temp[c - 'a']--;
//                 }

//                 if (isAnagram) {
//                     group.push_back(p);
//                     vis[i] = 1;
//                 }
//             }
//         }

//         ans.push_back(group);
//     }

//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string>> ans;
//         int n = strs.size();
//         vector<int> vis(n, 0);

//         for (int i = 0; i < n; i++) {
//             if (vis[i] == 0) {
//                 vis[i] = 1;
//                 check(i, strs[i], vis, strs, ans);
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>>ans;
    map<string,vector<string>>mpp;
    for(int i=0;i<strs.size();i++){

       string p=strs[i];
       sort(p.begin(),p.end());
       mpp[p].push_back(strs[i]);

    }

for(auto it:mpp){
      ans.push_back(it.second);

}


return ans;
    }


};