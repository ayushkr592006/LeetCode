class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        mini=float('-inf')

        n=len(accounts)
        m=len(accounts[0])
        for i in range(0,n,1):
          temp=0 
          for j in range(0,m,1):
            temp+=accounts[i][j]
          if(temp>mini):mini=temp
      
        return mini       
            