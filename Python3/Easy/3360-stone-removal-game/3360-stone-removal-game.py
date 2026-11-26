class Solution:
    def canAliceWin(self, n: int) -> bool:
        c, f = 10, 0
        while n >= c:
            n -= c
            c -= 1
            f += 1
        return f%2 == 1