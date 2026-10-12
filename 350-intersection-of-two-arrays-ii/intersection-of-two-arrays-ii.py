class Solution:
    def intersect(self, nums1: list[int], nums2: list[int]) -> list[int]:

        nums1.sort()
        l = []

        for i in nums2:
            if i in nums1:
                l.append(i)
                nums1.remove(i)

        return l
