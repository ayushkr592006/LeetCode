class Solution:
    def dfs(self,node,adjl,vis):
        vis[node]=1
        for it in adjl[node]:
            if(vis[it]==0):
                self.dfs(it,adjl,vis)


    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n=len(isConnected)
        adjl=[[] for _ in range(n) ]

        for  i in range(n):
            for j in range(n):
                if(isConnected[i][j]==1):
                    adjl[i].append(j)

        vis=[0]*n
        count=0

        for i in range(n):
            if(vis[i]==0):
                count+=1

                self.dfs(i,adjl,vis)            

        return count