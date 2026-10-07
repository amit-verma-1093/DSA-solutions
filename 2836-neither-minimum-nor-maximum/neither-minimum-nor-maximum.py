class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if(len(nums)>2):
            nums=list(set(nums))
            nums.sort()
            return nums[1]
        return -1