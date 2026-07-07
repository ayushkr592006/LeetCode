class Solution {
public:
  void solve(int i,int j,vector<vector<int>>& heights,vector<vector<int>>&vis1){
       int n=heights.size();
       int m=heights[0].size();
     queue<pair<int,int>>q;
     q.push({i,j});
     vis1[i][j]=1;
     int dr[]={-1,0,1,0};
     int dc[]={0,1,0,-1};

     while(!q.empty()){
  int row=q.front().first;
  int col=q.front().second;
  q.pop();
  for(int k=0;k<4;k++){
     int nrow=row+dr[k];
     int ncol=col+dc[k];

        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && heights[nrow][ncol]>=heights[row][col] && vis1[nrow][ncol]==0){
            vis1[nrow][ncol]=1;
            q.push({nrow,ncol});
        }


  }
 
  



     }

    



  }

   void polve(int i,int j,vector<vector<int>>& heights,vector<vector<int>>&vis2){
       int n=heights.size();
       int m=heights[0].size();
     queue<pair<int,int>>q;
     q.push({i,j});
     vis2[i][j]=1;
     int dr[]={-1,0,1,0};
     int dc[]={0,1,0,-1};

     while(!q.empty()){
  int row=q.front().first;
  int col=q.front().second;
  q.pop();
  for(int k=0;k<4;k++){
     int nrow=row+dr[k];
     int ncol=col+dc[k];

        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && heights[nrow][ncol]>=heights[row][col]&&vis2[nrow][ncol]==0){
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
     
       for(int i=0;i<m;i++){
        solve(0,i,heights,vis1);
       }
    for(int i=0;i<n;i++){
        solve(i,0,heights,vis1);
       }

 for(int i=0;i<m;i++){
        polve(n-1,i,heights,vis2);
       }
 for(int i=0;i<n;i++){
        polve(i,m-1,heights,vis2);
       }

vector<vector<int>>ans;
       for(int i=0;i<n;i++){
      
        for(int j=0;j<m;j++){
             if(vis1[i][j] && vis2[i][j]){
              ans.push_back({i,j});
             }
            
        }
       }


return ans;

    }
};