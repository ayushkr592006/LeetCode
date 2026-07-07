class Solution {
public:
void solve(int i,int j,vector<vector<int>>&vis1,vector<vector<int>>& heights){
      int n=heights.size();
        int m=heights[0].size();
         vis1[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        int delrow[4]={-1,1,0,0};
        int delcol[4]={0,0,-1,1};
        while(!q.empty()){
         auto it=q.front();
         int row=it.first;
         int col=it.second;
         q.pop();
         
           for(int k=0;k<4;k++){
             int nrow=row+delrow[k];
             int ncol=col+delcol[k];
             if(nrow>=0 && nrow<n&& ncol>=0 &&ncol<m &&heights[nrow][ncol]>=heights[row][col] && vis1[nrow][ncol]!=1){                 vis1[nrow][ncol]=1;
                q.push({nrow,ncol});
             }

           }



        }


}
void polve(int i,int j,vector<vector<int>>&vis2,vector<vector<int>>& heights){
      int n=heights.size();
        int m=heights[0].size();
        vis2[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        int delrow[4]={-1,1,0,0};
        int delcol[4]={0,0,-1,1};
        while(!q.empty()){
         auto it=q.front();
         int row=it.first;
         int col=it.second;
         q.pop();
           for(int k=0;k<4;k++){
             int nrow=row+delrow[k];
             int ncol=col+delcol[k];
             if(nrow>=0 && nrow<n&& ncol>=0 &&ncol<m &&heights[nrow][ncol]>=heights[row][col] &&vis2[nrow][ncol]!=1){
                vis2[nrow][ncol]=1;
                q.push({nrow,ncol});

             }

           }



        }


}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>>vis1(n,vector<int>(m,0));
          vector<vector<int>>vis2(n,vector<int>(m,0));
            vector<vector<int>>ans;
       for(int i=0;i<m;i++){
       solve(0,i,vis1,heights);
       }
       for(int i=0;i<n;i++){
       solve(i,0,vis1,heights);
       }
        for(int i=0;i<n;i++){
       polve(i,m-1,vis2,heights);
       }
       for(int i=0;i<m;i++){
       polve(n-1,i,vis2,heights);
       }


for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(vis1[i][j]==1 &&vis2[i][j]==1){
            ans.push_back({i,j});
        }
    }
}


return ans;
    }
};