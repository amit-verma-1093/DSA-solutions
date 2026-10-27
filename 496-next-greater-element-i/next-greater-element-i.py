class Solution:
    def nextGreaterElement(self, nums1: list[int], nums2: list[int]) -> list[int]:
        arr=[]
        for i in nums1:
            ind=nums2.index(i)
            ma=-1
            for j in range(ind,len(nums2)):
                if i<nums2[j]:
                    ma=nums2[j]
                    break
            arr.append(ma)    
        return arr
        