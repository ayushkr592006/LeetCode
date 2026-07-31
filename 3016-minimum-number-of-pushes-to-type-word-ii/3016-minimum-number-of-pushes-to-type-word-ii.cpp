class Solution {
public:
    int minimumPushes(string word) {
      
        
        map<char,int>mpp;
//character with most frequrnt will get 1st tap

for(int i=0;i<word.size();i++){
    mpp[word[i]]++;
}

vector<pair<char,int>>v(mpp.begin(),mpp.end());
sort(v.begin(),v.end(),[](const pair<char,int>&a,const pair<char,int>&b){
    if(a.second==b.second)return a.first<b.first;
    return a.second>b.second;
});
int cnt=0;
int n=v.size();
string t;
if(n<8){
    
   for(int i=0;i<word.size();i++)cnt+=1;
   return cnt;
}
int i=0;
int c=0;

map<int,int>mp;
while(i<n){
if(i%8==0)c++;

if(mp.find(v[i].first)!=mp.end())cnt+=mp[v[i].first];

else {
    cnt+=c*v[i].second;
    mp[v[i].first]=c;
}


i++;


}


return cnt;


// int c=1;
// int p=1;
// for(int i=0;i<word.size();i++){
// if(mpp.find(word[i])!=mpp.end()){
//     cnt+=mpp[word[i]];
// }
// else if(p%8==0) {
   
// c+=1;
//  cnt+=c;
//  mpp[word[i]]=c;
// }
// else {
//     p++;
//     cnt+=c;
//  mpp[word[i]]=c;
// }

         






//         if(n<=8)cnt+=n;
// else if(n>8){
//       int c=1;
//       int p=1;
//       while(n>0){
//            if(p<=8){
//             cnt+=c;
//             n-=1;
//             p++;
//            }
//             else  {
//                 c++;
//                 // cnt+=c;
//                 // n-=1;
//                 p=1;

//             }
//       }




// }
    

    }
};