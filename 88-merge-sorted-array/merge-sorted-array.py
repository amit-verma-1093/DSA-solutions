class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        
        for i in range(n):
            nums1[m+i]=nums2[i]
        
        return nums1.sort()

