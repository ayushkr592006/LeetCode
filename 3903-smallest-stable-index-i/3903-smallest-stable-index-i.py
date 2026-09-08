class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        mini=float('inf')
        maxi=float('-inf')
        n=len(nums)
        v=[[0,0] for _ in range(n)]
        for i in range(0,n,1):
           if nums[i]>maxi:
             maxi=nums[i]
           v[i][0]=maxi
        
        for i in range(n-1,-1,-1):
            if nums[i]<mini:
                mini=nums[i]
            v[i][1]=mini

        for i in range(0,n,1):
         if v[i][0]-v[i][1]<=k:return i

        return -1;

