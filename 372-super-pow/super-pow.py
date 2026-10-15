class Solution:
    def superPow(self, a: int, b: list[int]) -> int:
        ans = 1
        a %= 1337

        for digit in b:
            ans = pow(ans, 10, 1337) * pow(a, digit, 1337) % 1337

        return ans