class Solution:
    def peakIndexInMountainArray(self, arr: list[int]) -> int:
        m=arr.index(max(arr))
        return m