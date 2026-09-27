class Solution:
    def reverse(self, x: int) -> int:
        if(x<0):
            x*=(-1)
            x=str(x)
            x=x[::-1]
            s=""
            for i in x:
                if(i !=0):
                    s+=i
            s=int(s)
            s=s*(-1)   
        
        else:
            x=str(x)
            x=x[::-1]
            s=""
            for i in x:
                if(i !=0):
                    s+=i
            s=int (s)  
        
        if s < -2**31 or s > 2**31 - 1:
            return 0  
        return s