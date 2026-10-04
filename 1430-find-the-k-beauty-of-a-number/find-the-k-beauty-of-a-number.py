class Solution:
    def divisorSubstrings(self, num: int, k: int) -> int:
        s=str(num)
        c=0
        for i in range(len(s)-k+1):
            if(int(s[i:i+k])!=0):
                if(num%int(s[i:i+k])==0):
                    c+=1
        return c