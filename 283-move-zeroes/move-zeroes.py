class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        for i in nums:
            if(i==0):
                nums.remove(i)
                nums.append(i)
        
        