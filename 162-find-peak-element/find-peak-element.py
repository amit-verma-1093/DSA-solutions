class Solution:
    def findPeakElement(self, nums: list[int]) -> int:
        m=max(nums)
        for i in range(len(nums)):
            if(m==nums[i]):
                return i