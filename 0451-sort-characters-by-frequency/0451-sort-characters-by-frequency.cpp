class Solution {
public:
    string frequencySort(string s) {
        
    map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;

    }

vector<pair<char,int>>v(mpp.begin(),mpp.end());

sort(v.begin(),v.end(),[](const pair<int,int>&a,const pair<int,int>&b){
return a.second>b.second;
    
}
);
string ans="";
for(auto it:v){
    for(int i=0;i<it.second;i++){
    ans+=it.first;}
}


return ans;
    }
};