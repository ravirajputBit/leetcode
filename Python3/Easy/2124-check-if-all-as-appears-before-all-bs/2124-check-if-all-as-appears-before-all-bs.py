class Solution:
    def checkString(self, s: str) -> bool:
        b = False
        for x in s:
            if x == 'a':
                if b: return False
            else: b = True
        return True