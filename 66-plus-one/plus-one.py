class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        s=""
        for i in digits:
            s+=str(i)
        sum=str(int(s)+1)
        lst=list(sum)
        l=[]
        for i in lst:
            l.append(int(i))
        return l