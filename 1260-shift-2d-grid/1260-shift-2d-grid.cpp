class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
int m=grid.size();
int n=grid[0].size();
        // vector<vector<int>>ans(m,vector<int>(n));
        // ans[0][0]=grid[m-1][n-1];
      for(int i=0;i<k;i++){
        vector<vector<int>>ans(m,vector<int>(n));
        ans[0][0]=grid[m-1][n-1];
           for(int j=0;j<m;j++){
            for(int r=0;r<n;r++){
          if(j==m-1 && r==n-1)continue;
           else if(r==n-1){
             ans[j+1][0]=grid[j][n-1];
           }
   else  ans[j][r+1]=grid[j][r];





            }
           }
         grid=ans; 
         
      }
 return grid;


    }
};