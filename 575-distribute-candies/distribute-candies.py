class Solution:
    def distributeCandies(self, candyType: list[int]) -> int:
       
        n_len=len(set(candyType))
        
        return min(n_len,len(candyType)//2)