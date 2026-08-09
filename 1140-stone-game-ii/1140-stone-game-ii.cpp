//hamesha yaad rakhna whenits your turn choose maximum and when opponents turn expext minimum


class Solution {
public:
 int t[2][101][101];
int solve(int man,int i,int m,int n,vector<int>& piles){
if(i>=n)return 0;
int result=(man==1)?-1:INT_MAX;
int stones=0;
if(t[man][i][m]!=-1)return t[man][i][m];
for(int x=1;x<=min(2*m,n-i);x++){
       stones+=piles[i+x-1];
if(man==1){
          result=max(result,stones+solve(0,i+x,max(m,x),n,piles));
}
else  result=min(result,solve(1,i+x,max(m,x),n,piles));

}


 return t[man][i][m]=result;


}





    int stoneGameII(vector<int>& piles) {
        int n=piles.size();
        int m=1;
     
      memset(t,-1,sizeof(t));
       return solve(1,0,m,n,piles);



    }
};