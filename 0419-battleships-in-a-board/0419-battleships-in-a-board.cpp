class Solution {
public:
       void bfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>& board){
        int dr[]={0,1};
        int dc[]={1,0};
     int n=board.size();
         int m=board[0].size();
            queue<pair<int,int>>q;
            q.push({i,j});
            vis[i][j]=1;

            while(!q.empty()){
                int row=q.front().first;
                int col=q.front().second;
                q.pop();

             for(int k=0;k<2;k++){
                int nrow=row+dr[k];
                int ncol=col+dc[k];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && board[nrow][ncol]=='X' &&vis[nrow][ncol]==0){
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
             }
            }


       }


    int countBattleships(vector<vector<char>>& board) {
         
         int count=0;
         int n=board.size();
         int m=board[0].size();
         vector<vector<int>>vis(n,vector<int>(m,0));

         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='X' && vis[i][j]==0){
                    count++;
                    bfs(i,j,vis,board);
                }
            }
         }

return count;
    }
};