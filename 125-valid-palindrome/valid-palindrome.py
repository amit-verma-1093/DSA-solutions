class Solution:
    def isPalindrome(self, s: str) -> bool:
        p=""
        s=s.lower()
        for i in s:
            
            if(i.isalnum()):
                
                p+=i
        prev=p[::-1]
        return prev==p