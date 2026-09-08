class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        
        mini=float('-inf')
        v=[False for _ in range(len(candies))]
        for i in range(0,len(candies)):
           if(candies[i]>mini):mini=candies[i]

        for i in range(0,len(candies)):
            if(candies[i]+extraCandies>=mini):
                v[i]=True
            else:v[i]=False


        return v        

                 