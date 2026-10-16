class Solution:
    def sumOfTheDigitsOfHarshadNumber(self, x: int) -> int:
        x=str(x)
        s=0
        for i in x:
            s+=int(i)
        if(int(x)%s):
           return -1
        return s
