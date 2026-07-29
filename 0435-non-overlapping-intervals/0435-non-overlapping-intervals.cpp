class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int cnt=0;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
            if(a[0]==b[0])return a[1]<b[1];
            return a[0]<b[0];
        });
       
        

int prev=0;
for(int i=1;i<n;i++){

if(intervals[i][0]<intervals[prev][1]){cnt++;
if(intervals[i][1]<intervals[prev][1])prev=i;}
else prev=i;



}





        // int endtime=intervals[0][1];
// for(auto it = intervals.begin()+1; it != intervals.end();){
//     if((*it)[0]<endtime){cnt++;
//     endtime=(*it)[1];
//     it = intervals.erase(it);
//     }
//     else {endtime=(*it)[1];
   
//     ++it;}
    
// }

return cnt;
    }
};