class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n=len(nums)
        v=[[0,0] for _ in range(len(nums))]
        prefix=nums[0]
        v[0][0]=1
        for i in range(1,len(nums)):
            v[i][0]=prefix
            prefix=prefix*nums[i]
        suffix=nums[len(nums)-1]
        v[len(nums)-1][1]=1
        for i in range(n-2,-1,-1):
            v[i][1]=suffix
            suffix=suffix*nums[i]
        ans=[[0] for _ in range(len(nums))]    
        for i in range(len(nums)):
            ans[i]=v[i][0]*v[i][1]

        return ans    

