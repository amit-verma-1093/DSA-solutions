class Solution:
    def findGCD(self, nums: List[int]) -> int:
        m=max(nums)
        n=min(nums)
        for i in range(n,0,-1):
            if(m%i==0 and n%i==0):
                return i
         