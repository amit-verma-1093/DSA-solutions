class Solution:
    def reverseString(self, s: list[str]) -> None:
        l=0
        r=len(s)-1
        last=""
        while(l<=r):
            last=s[r]
            s[r]=s[l]
            s[l]=last
            l+=1
            r-=1
