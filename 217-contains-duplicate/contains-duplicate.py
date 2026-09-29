class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:

        n=list(set(nums))
        n.sort()
        nums.sort()
        if(n==nums):
            return False
        return True