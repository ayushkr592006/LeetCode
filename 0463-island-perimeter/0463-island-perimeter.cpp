class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
       int perimeter=0;
            int n=grid.size();
            int m=grid[0].size();
       queue<pair<int,int>>q;
       vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                q.push({i,j});
                vis[i][j]=1;
            }
            }
        }
      int dr[]={-1,0,1,0};
      int dc[] = {0, 1, 0, -1};

      while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();

     for(int k=0;k<4;k++){
        int nrow=row+dr[k];
        int ncol=col+dc[k];

       if(nrow<0 || nrow>=n || ncol<0 || ncol>=m || grid[nrow][ncol]==0 ){
        perimeter++;
       }
       else if(!vis[nrow][ncol]) q.push({nrow,ncol});

     }


      }

return perimeter;
    }
};