class Solution:
    def addToArrayForm(self, num: list[int], k: int) -> list[int]:
        sys.set_int_max_str_digits(0)
        s=""
        for i in num:
            s+=str(i)
        sum=str(int(s)+k)
        l=list(sum)
        lst=[]
        for i in l:
            lst.append(int(i))
        return lst
