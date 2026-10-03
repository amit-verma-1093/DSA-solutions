class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s.lstrip()
        s.rstrip()
        s = s.split()
        l=list(s)
        ls=l[-1]

        return (len(ls))